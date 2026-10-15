import AppKit
import UniformTypeIdentifiers

/// One annotated image: the backing image, the ordered graphics on top of it, and undo.
///
/// Every mutation of `graphics` goes through this class so undo/redo stays in one place.
final class Document: NSDocument {
    nonisolated static let nativeTypeID = "com.marcoledesma.annotate.document"
    static var nativeType: String { nativeTypeID }
    static let blankCanvasSize = CGSize(width: 1024, height: 768)

    private(set) var image: NSImage?
    private(set) var graphics: [Graphic] = []

    /// Called after anything visible changes (edits, undo, redo).
    var onChange: (() -> Void)?

    /// Set when the document was opened from a plain image rather than a saved `.annot`.
    private var importedImageName: String?

    var canvasSize: CGSize { image?.size ?? Self.blankCanvasSize }

    nonisolated override class var autosavesInPlace: Bool { true }
    nonisolated override class var readableTypes: [String] { [nativeTypeID, UTType.image.identifier] }
    nonisolated override class var writableTypes: [String] { [nativeTypeID] }
    nonisolated override class func isNativeType(_ type: String) -> Bool { type == nativeTypeID }

    override func makeWindowControllers() {
        // An opened image becomes a new untitled `.annot` document, so Save never
        // overwrites the original screenshot.
        if let name = importedImageName, fileURL != nil {
            fileURL = nil
            fileType = Self.nativeType
            displayName = name
        }
        addWindowController(DocumentWindowController(document: self))
    }

    // MARK: Reading & writing

    // NSDocument declares these nonisolated, but with the default
    // `canConcurrentlyReadDocuments` / `canAsynchronouslyWrite(…)` = false they run
    // on the main thread.
    nonisolated override func read(from url: URL, ofType typeName: String) throws {
        try super.read(from: url, ofType: typeName)
        MainActor.assumeIsolated {
            if typeName != Self.nativeType {
                importedImageName = url.deletingPathExtension().lastPathComponent
            }
        }
    }

    nonisolated override func read(from data: Data, ofType typeName: String) throws {
        try MainActor.assumeIsolated { try readContents(from: data, ofType: typeName) }
    }

    nonisolated override func data(ofType typeName: String) throws -> Data {
        try MainActor.assumeIsolated { try encodedContents() }
    }

    func readContents(from data: Data, ofType typeName: String) throws {
        if typeName == Self.nativeType {
            let file = try JSONDecoder().decode(DocumentFile.self, from: data)
            image = file.image.flatMap(NSImage.init(data:))
            graphics = file.graphics.compactMap(Graphic.make(from:))
        } else if UTType(typeName)?.conforms(to: .image) == true {
            guard let image = NSImage(data: data) else {
                throw CocoaError(.fileReadCorruptFile)
            }
            self.image = Self.normalized(image)
            graphics = []
        } else {
            throw CocoaError(.fileReadUnsupportedScheme)
        }
    }

    func encodedContents() throws -> Data {
        let file = DocumentFile(image: image.flatMap(Self.pngData(of:)),
                                graphics: graphics.map(\.record))
        let encoder = JSONEncoder()
        encoder.outputFormatting = [.sortedKeys]
        return try encoder.encode(file)
    }

    // MARK: Graphics editing (undoable)

    /// Inserts above everything with the same or lower z-index (`proposedIndexInGraphics:`).
    func add(_ graphic: Graphic, actionName: String) {
        let index = (graphics.lastIndex { $0.zIndex <= graphic.zIndex }).map { $0 + 1 } ?? 0
        insert(graphic, at: index)
        undoManager?.setActionName(actionName)
    }

    func remove(_ graphicsToRemove: [Graphic], actionName: String) {
        for graphic in graphicsToRemove { remove(graphic) }
        undoManager?.setActionName(actionName)
    }

    /// Registers undo for a graphic whose properties were already changed in place
    /// (live drags mutate the graphic directly; this records the before-state once).
    func graphic(_ graphic: Graphic, didChangeFrom before: Graphic.Record, actionName: String) {
        guard graphic.record != before else { return }
        let after = graphic.record
        undoManager?.registerUndo(withTarget: self) { doc in
            doc.set(graphic, to: before, undoing: after, actionName: actionName)
        }
        undoManager?.setActionName(actionName)
        onChange?()
    }

    private func set(_ graphic: Graphic, to record: Graphic.Record,
                     undoing current: Graphic.Record, actionName: String) {
        graphic.apply(record)
        undoManager?.registerUndo(withTarget: self) { doc in
            doc.set(graphic, to: current, undoing: record, actionName: actionName)
        }
        undoManager?.setActionName(actionName)
        onChange?()
    }

    private func insert(_ graphic: Graphic, at index: Int) {
        graphics.insert(graphic, at: index)
        undoManager?.registerUndo(withTarget: self) { doc in doc.remove(graphic) }
        onChange?()
    }

    private func remove(_ graphic: Graphic) {
        guard let index = graphics.firstIndex(where: { $0 === graphic }) else { return }
        graphics.remove(at: index)
        undoManager?.registerUndo(withTarget: self) { doc in doc.insert(graphic, at: index) }
        onChange?()
    }

    // MARK: Rendering & export

    /// Draws the image and graphics into a flipped context sized to `canvasSize`.
    func drawCanvas(in context: CGContext) {
        let bounds = CGRect(origin: .zero, size: canvasSize)
        if let image {
            NSGraphicsContext.saveGraphicsState()
            NSGraphicsContext.current = NSGraphicsContext(cgContext: context, flipped: true)
            image.draw(in: bounds, from: .zero, operation: .copy, fraction: 1,
                       respectFlipped: true, hints: nil)
            NSGraphicsContext.restoreGraphicsState()
        } else {
            context.setFillColor(NSColor.white.cgColor)
            context.fill(bounds)
        }
        for graphic in graphics {
            graphic.drawContents(in: context, isBeingCreated: false)
        }
    }

    /// Flattened PNG at the image's native pixel resolution (2x for Retina screenshots).
    func renderedPNG() -> Data? {
        let size = canvasSize
        let pixels = image.map(Self.pixelSize(of:)) ?? size
        let width = Int(pixels.width.rounded()), height = Int(pixels.height.rounded())
        guard width > 0, height > 0,
              let context = CGContext(data: nil, width: width, height: height,
                                      bitsPerComponent: 8, bytesPerRow: 0,
                                      space: CGColorSpace(name: CGColorSpace.sRGB)!,
                                      bitmapInfo: CGImageAlphaInfo.premultipliedLast.rawValue)
        else { return nil }
        context.translateBy(x: 0, y: CGFloat(height))
        context.scaleBy(x: CGFloat(width) / size.width, y: -CGFloat(height) / size.height)
        drawCanvas(in: context)
        guard let cgImage = context.makeImage() else { return nil }
        return NSBitmapImageRep(cgImage: cgImage).representation(using: .png, properties: [:])
    }

    @IBAction func exportPNG(_ sender: Any?) {
        guard let window = windowControllers.first?.window else { return }
        let panel = NSSavePanel()
        panel.allowedContentTypes = [.png]
        panel.nameFieldStringValue = (importedImageName ?? displayName) + " annotated.png"
        panel.beginSheetModal(for: window) { [weak self] response in
            guard response == .OK, let url = panel.url, let self else { return }
            do {
                guard let data = self.renderedPNG() else { throw CocoaError(.fileWriteUnknown) }
                try data.write(to: url)
            } catch {
                self.presentError(error)
            }
        }
    }

    // MARK: Image helpers

    private static func pixelSize(of image: NSImage) -> CGSize {
        let reps = image.representations
        let w = reps.map(\.pixelsWide).max() ?? 0, h = reps.map(\.pixelsHigh).max() ?? 0
        return w > 0 && h > 0 ? CGSize(width: w, height: h) : image.size
    }

    /// Keeps the image's point size but makes sure it has a usable size at all.
    private static func normalized(_ image: NSImage) -> NSImage {
        if image.size.width > 0, image.size.height > 0 { return image }
        image.size = pixelSize(of: image)
        return image
    }

    private static func pngData(of image: NSImage) -> Data? {
        guard let cg = image.cgImage(forProposedRect: nil, context: nil, hints: nil) else { return nil }
        let rep = NSBitmapImageRep(cgImage: cg)
        rep.size = image.size
        return rep.representation(using: .png, properties: [:])
    }
}

/// On-disk format: JSON with the PNG image base64-encoded alongside the graphic records.
struct DocumentFile: Codable {
    var version = 1
    var image: Data?
    var graphics: [Graphic.Record]
}
