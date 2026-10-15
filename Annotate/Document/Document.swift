import AppKit
import UniformTypeIdentifiers

/// One annotated image: the backing image, the ordered graphics on top of it, and undo.
///
/// Every mutation of `graphics` goes through this class so undo/redo stays in one place.
final class Document: NSDocument {
    nonisolated static let pngTypeID = UTType.png.identifier
    static let blankCanvasSize = CGSize(width: 1024, height: 768)

    private(set) var image: NSImage?
    private(set) var graphics: [Graphic] = []

    /// Called after anything visible changes (edits, undo, redo).
    var onChange: (() -> Void)?

    /// Asked to commit an in-progress edit (e.g. typing in a text box) before the
    /// document is flattened for saving or copying.
    var commitPendingEdits: (() -> Void)?

    /// Name of the screenshot/image this document was opened from.
    private var sourceName: String?

    var canvasSize: CGSize { image?.size ?? Self.blankCanvasSize }

    // Saving writes a flattened PNG. No autosave: an autosave would flatten the
    // annotations into a file nobody asked for.
    nonisolated override class var autosavesInPlace: Bool { false }
    nonisolated override class var readableTypes: [String] { [UTType.image.identifier] }
    nonisolated override class var writableTypes: [String] { [pngTypeID] }
    nonisolated override class func isNativeType(_ type: String) -> Bool { type == pngTypeID }

    override func makeWindowControllers() {
        // An opened image becomes a new untitled document, so Save asks where to put
        // the annotated PNG instead of overwriting the screenshot.
        if let name = sourceName, fileURL != nil {
            fileURL = nil
            fileType = Self.pngTypeID
            displayName = name
        }
        addWindowController(DocumentWindowController(document: self))
    }

    /// New untitled document around an image that has no file (clipboard).
    static func openUntitled(with image: NSImage, name: String) {
        let document = Document()
        document.image = normalized(image)
        document.sourceName = name
        document.displayName = name
        document.fileType = pngTypeID
        NSDocumentController.shared.addDocument(document)
        document.makeWindowControllers()
        document.showWindows()
    }

    // MARK: Reading & writing

    // NSDocument declares these nonisolated, but with the default
    // `canConcurrentlyReadDocuments` / `canAsynchronouslyWrite(…)` = false they run
    // on the main thread.
    nonisolated override func read(from url: URL, ofType typeName: String) throws {
        try super.read(from: url, ofType: typeName)
        MainActor.assumeIsolated {
            sourceName = url.deletingPathExtension().lastPathComponent
        }
    }

    nonisolated override func read(from data: Data, ofType typeName: String) throws {
        try MainActor.assumeIsolated {
            guard let image = NSImage(data: data) else { throw CocoaError(.fileReadCorruptFile) }
            self.image = Self.normalized(image)
            graphics = []
        }
    }

    nonisolated override func data(ofType typeName: String) throws -> Data {
        try MainActor.assumeIsolated {
            commitPendingEdits?()
            guard let png = renderedPNG() else { throw CocoaError(.fileWriteUnknown) }
            return png
        }
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

    /// ⇧⌘C: put the annotated image on the clipboard and close without asking to save.
    @IBAction func copyImageAndClose(_ sender: Any?) {
        commitPendingEdits?()
        guard let png = renderedPNG() else {
            NSSound.beep()
            return
        }
        let pasteboard = NSPasteboard.general
        pasteboard.clearContents()
        pasteboard.setData(png, forType: .png)
        if let tiff = NSBitmapImageRep(data: png)?.tiffRepresentation {
            pasteboard.setData(tiff, forType: .tiff)  // for apps that only read TIFF
        }
        close()
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
}
