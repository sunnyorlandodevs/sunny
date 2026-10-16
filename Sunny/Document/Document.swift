import AppKit
import UniformTypeIdentifiers

/// One annotated image: the backing image, the ordered graphics on top of it, and undo.
///
/// Every mutation of `graphics` goes through this class so undo/redo stays in one place.
final class Document: NSDocument {
    nonisolated static let pngTypeID = UTType.png.identifier
    static let blankCanvasSize = CGSize(width: 1024, height: 768)

    private(set) var image: NSImage? { didSet { pixelatedCache = [:] } }
    private(set) var graphics: [Graphic] = []

    /// Called after anything visible changes (edits, undo, redo).
    var onChange: (() -> Void)?

    /// Called after the canvas changes size (crop, and undoing one).
    var onCanvasResize: (() -> Void)?

    /// Pixelated copies of the image, one per block size, for redaction boxes.
    private var pixelatedCache: [CGFloat: CGImage] = [:]

    /// Asked to commit an in-progress edit (e.g. typing in a text box) before the
    /// document is flattened for saving or copying.
    var commitPendingEdits: (() -> Void)?

    /// Name of the screenshot/image this document was opened from.
    private var sourceName: String?

    var canvasSize: CGSize { image?.size ?? Self.blankCanvasSize }

    // Saving writes a flattened PNG. No autosave: an autosave would flatten the
    // annotations into a file nobody asked for.
    nonisolated override class var autosavesInPlace: Bool { false }

    /// Annotations are throwaway unless saved or copied: closing a window (or quitting)
    /// never asks about unsaved changes.
    nonisolated override var isDocumentEdited: Bool { false }
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
    /// `pending` are graphics still being drawn or typed (not in the document yet).
    func drawCanvas(in context: CGContext, pending: [Graphic] = []) {
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
        let all = graphics + pending
        // Redaction first, so highlights, spotlights and shapes sit on top of the blocks.
        for box in all.compactMap({ $0 as? Pixelate }) {
            if let pixelated = pixelatedImage(blockSize: box.blockSize) {
                box.drawPixelation(from: pixelated, canvas: bounds, in: context)
            }
        }
        OverlayRectangle.drawDimming(for: all.compactMap { $0 as? OverlayRectangle },
                                     canvas: bounds, in: context)
        for graphic in graphics {
            graphic.drawContents(in: context, isBeingCreated: false)
        }
        for graphic in pending {
            graphic.drawContents(in: context, isBeingCreated: true)
        }
    }

    /// The whole image pixelated with `blockSize`-point blocks, at native resolution.
    func pixelatedImage(blockSize: CGFloat) -> CGImage? {
        if let cached = pixelatedCache[blockSize] { return cached }
        guard let image, let cgImage = Self.cgImage(of: image) else { return nil }
        let scale = CGFloat(cgImage.width) / canvasSize.width
        let pixelated = Pixelate.pixelate(cgImage, blockPixels: (blockSize * scale).rounded())
        pixelatedCache[blockSize] = pixelated
        return pixelated
    }

    // MARK: Crop (undoable)

    /// The canvas area a crop to `rect` would keep: clamped to the image and snapped
    /// to whole pixels, in canvas points.
    func cropRect(for rect: CGRect) -> CGRect? {
        guard let image, let cgImage = Self.cgImage(of: image) else { return nil }
        let scale = CGFloat(cgImage.width) / canvasSize.width
        let clamped = rect.standardized.intersection(CGRect(origin: .zero, size: canvasSize))
        guard !clamped.isNull else { return nil }
        let pixels = CGRect(x: (clamped.minX * scale).rounded(), y: (clamped.minY * scale).rounded(),
                            width: (clamped.width * scale).rounded(), height: (clamped.height * scale).rounded())
        guard pixels.width >= 1, pixels.height >= 1 else { return nil }
        return CGRect(x: pixels.minX / scale, y: pixels.minY / scale,
                      width: pixels.width / scale, height: pixels.height / scale)
    }

    /// Crops the image to `rect` (canvas points) and moves the graphics with it.
    /// Graphics that end up outside the new edges stay, so undo brings back the same picture.
    func crop(to rect: CGRect) {
        guard let image, let cgImage = Self.cgImage(of: image), let area = cropRect(for: rect) else { return }
        let scale = CGFloat(cgImage.width) / canvasSize.width
        let pixels = CGRect(x: area.minX * scale, y: area.minY * scale,
                            width: area.width * scale, height: area.height * scale).integral
        // CGImage cropping is in the image's top-left pixel space, same as the canvas.
        guard let cropped = cgImage.cropping(to: pixels) else { return }
        // A bitmap rep keeps the native pixels; `NSImage(cgImage:size:)` would report
        // the screen's backing scale instead.
        let rep = NSBitmapImageRep(cgImage: cropped)
        rep.size = area.size
        let newImage = NSImage(size: area.size)
        newImage.addRepresentation(rep)
        replaceImage(with: newImage, shiftingGraphicsBy: CGVector(dx: -area.minX, dy: -area.minY))
        undoManager?.setActionName("Crop")
    }

    private func replaceImage(with newImage: NSImage, shiftingGraphicsBy shift: CGVector) {
        let oldImage = image
        image = newImage
        for graphic in graphics { graphic.translate(by: shift) }
        undoManager?.registerUndo(withTarget: self) { doc in
            guard let oldImage else { return }
            doc.replaceImage(with: oldImage, shiftingGraphicsBy: CGVector(dx: -shift.dx, dy: -shift.dy))
        }
        onCanvasResize?()
        onChange?()
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

    /// ⇧⌘C: put the annotated image on the clipboard and confirm with a toast.
    /// The window stays open for more edits.
    @IBAction func copyImage(_ sender: Any?) {
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
        (windowControllers.first as? DocumentWindowController)?.showToast("Copied to Clipboard")
    }

    // MARK: Image helpers

    /// The image as a bitmap at its native pixel size.
    private static func cgImage(of image: NSImage) -> CGImage? {
        let pixels = pixelSize(of: image)
        if let rep = image.representations.first(where: { $0.pixelsWide == Int(pixels.width) }) as? NSBitmapImageRep,
           let cgImage = rep.cgImage {
            return cgImage
        }
        let width = Int(pixels.width.rounded()), height = Int(pixels.height.rounded())
        guard width > 0, height > 0,
              let context = CGContext(data: nil, width: width, height: height, bitsPerComponent: 8, bytesPerRow: 0,
                                      space: CGColorSpace(name: CGColorSpace.sRGB)!,
                                      bitmapInfo: CGImageAlphaInfo.premultipliedLast.rawValue)
        else { return nil }
        NSGraphicsContext.saveGraphicsState()
        NSGraphicsContext.current = NSGraphicsContext(cgContext: context, flipped: false)
        image.draw(in: CGRect(x: 0, y: 0, width: width, height: height))
        NSGraphicsContext.restoreGraphicsState()
        return context.makeImage()
    }

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
