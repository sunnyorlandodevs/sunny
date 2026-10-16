import AppKit

/// The frame being dragged out with the crop tool (`Crop` in the original). It isn't
/// part of the document: it lives on the canvas controller until it's applied or cancelled.
/// Corner handles and flipping work like a rectangle's.
final class CropRegion: Shape {
    override class var tool: Tool { .crop }

    /// Outside the frame is shaded more than a spotlight, so the cut is obvious.
    static let shadeColor = NSColor(white: 0, alpha: 0.5)

    override func isContentsUnderPoint(_ point: CGPoint) -> Bool {
        rect.standardized.contains(point)
    }

    /// Shade outside, a white frame with thirds guides, and the corner handles.
    func drawOverlay(canvas: CGRect, in context: CGContext) {
        let frame = rect.standardized
        context.saveGState()
        context.addRect(canvas)
        context.addRect(frame)
        context.setFillColor(Self.shadeColor.cgColor)
        context.fillPath(using: .evenOdd)

        context.setStrokeColor(NSColor(white: 1, alpha: 0.35).cgColor)
        context.setLineWidth(1)
        for third in [1.0 / 3, 2.0 / 3] {
            let x = frame.minX + frame.width * third, y = frame.minY + frame.height * third
            context.strokeLineSegments(between: [CGPoint(x: x, y: frame.minY), CGPoint(x: x, y: frame.maxY),
                                                 CGPoint(x: frame.minX, y: y), CGPoint(x: frame.maxX, y: y)])
        }
        context.setStrokeColor(NSColor.white.cgColor)
        context.setLineWidth(1.5)
        context.stroke(frame)
        context.restoreGState()
        drawHandles(in: context)
    }
}
