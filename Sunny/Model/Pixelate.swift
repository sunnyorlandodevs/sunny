import AppKit
import CoreImage

/// Redaction box — tool 8 (`Pixelate` in the original).
///
/// Like the original, the document keeps one pixelated copy of the whole image and
/// each box shows its part of that copy (`drawInRect:fromRect:` of `pixelatedImage`).
/// The flattened PNG only ever contains the blocks, never the text underneath.
final class Pixelate: Shape {
    override class var tool: Tool { .pixelate }

    /// Block size in points for S/M/L.
    static let blockSizes: [CGFloat] = [6, 10, 16]

    var blockSize: CGFloat { Self.blockSizes[min(max(size, 0), Self.blockSizes.count - 1)] }

    /// `Pixelate zIndex` = 1: right above the image.
    override var zIndex: Int { 1 }

    override var drawingBounds: CGRect { rect.standardized.insetBy(dx: -7, dy: -7) }

    override func isContentsUnderPoint(_ point: CGPoint) -> Bool {
        rect.standardized.contains(point)
    }

    /// Fills the box from the document's pixelated copy (canvas-sized, see
    /// `Document.pixelatedImage(blockSize:)`).
    func drawPixelation(from pixelated: CGImage, canvas: CGRect, in context: CGContext) {
        context.saveGState()
        context.clip(to: rect.standardized)
        context.interpolationQuality = .none
        // The context is flipped; CGImage draws bottom-up, so flip it back for the image.
        context.translateBy(x: 0, y: canvas.height)
        context.scaleBy(x: 1, y: -1)
        context.draw(pixelated, in: canvas)
        context.restoreGState()
    }

    /// Only a faint outline while dragging, so the box shows on flat areas too.
    override func drawContents(in context: CGContext, isBeingCreated: Bool) {
        guard isBeingCreated else { return }
        context.saveGState()
        context.setStrokeColor(NSColor(white: 0.5, alpha: 0.8).cgColor)
        context.setLineWidth(1)
        context.setLineDash(phase: 0, lengths: [4, 3])
        context.stroke(rect.standardized.insetBy(dx: 0.5, dy: 0.5))
        context.restoreGState()
    }

    /// CIPixellate over the image at its native pixel size, with square blocks of
    /// `blockSize` points anchored to the image's top-left corner.
    static func pixelate(_ image: CGImage, blockPixels: CGFloat) -> CGImage? {
        let input = CIImage(cgImage: image)
        let extent = input.extent
        guard let filter = CIFilter(name: "CIPixellate") else { return nil }
        filter.setValue(input.clampedToExtent(), forKey: kCIInputImageKey)
        filter.setValue(max(blockPixels, 1), forKey: kCIInputScaleKey)
        // Block edges fall on `center`. CIImage's origin is bottom-left, so this anchors
        // the grid at the image's top-left corner.
        filter.setValue(CIVector(x: 0, y: extent.height), forKey: kCIInputCenterKey)
        guard let output = filter.outputImage?.cropped(to: extent) else { return nil }
        return CIContext(options: [.useSoftwareRenderer: false])
            .createCGImage(output, from: extent, format: .RGBA8, colorSpace: image.colorSpace ?? CGColorSpace(name: CGColorSpace.sRGB)!)
    }
}
