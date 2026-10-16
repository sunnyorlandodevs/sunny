import AppKit

/// Marker-style box (new in Sunny): the current color multiplied over the image, so
/// text underneath stays readable the way a highlighter pen works on paper.
final class Highlight: Shape {
    override class var tool: Tool { .highlight }

    static let opacity: CGFloat = 0.55

    /// Right above the image and pixelation, under everything else.
    override var zIndex: Int { 1 }

    /// The whole box is grabbable, not just its edge.
    override func isContentsUnderPoint(_ point: CGPoint) -> Bool {
        rect.standardized.contains(point)
    }

    override func drawContents(in context: CGContext, isBeingCreated: Bool) {
        context.saveGState()
        context.setBlendMode(.multiply)
        context.setFillColor(color.withAlphaComponent(Self.opacity).cgColor)
        context.fill(rect.standardized)
        context.restoreGState()
    }
}
