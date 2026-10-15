import AppKit

/// Spotlight rectangle — tool 2 (`OverlayRectangle` in the original).
///
/// Everything outside the rectangle is darkened; the inside stays untouched. The
/// darkening is one shared layer drawn by `Document.drawCanvas` (`CanvasView
/// drawOverlayForGraphics:withSize:`), so several spotlights cut several holes. This
/// class draws the colored border, with a soft inner edge when shadow is on.
final class OverlayRectangle: Shape {
    override class var tool: Tool { .overlayRectangle }

    /// 33% black, from the original.
    static let dimColor = NSColor(white: 0, alpha: 0.33)

    /// Below shapes, arrows and text so those stay bright on top of the dimming.
    override var zIndex: Int { 2 }

    /// The area left undimmed.
    var spotlightPath: CGPath { drawingPath }

    override func drawContents(in context: CGContext, isBeingCreated: Bool) {
        context.saveGState()
        // Clip to the border's outer edge so the shadow falls inward over the image.
        let outer = rect.standardized.insetBy(dx: -strokeWidth / 2, dy: -strokeWidth / 2)
        context.clip(to: outer)
        if hasShadow {
            context.setShadow(offset: .zero, blur: 1, color: NSColor(white: 0, alpha: 0.7).cgColor)
        }
        context.setStrokeColor(color.cgColor)
        context.setLineWidth(strokeWidth)
        context.addPath(drawingPath)
        context.strokePath()
        context.restoreGState()
    }

    /// One dim layer over the whole canvas with every spotlight punched out of it.
    static func drawDimming(for overlays: [OverlayRectangle], canvas: CGRect, in context: CGContext) {
        guard !overlays.isEmpty else { return }
        context.saveGState()
        context.beginTransparencyLayer(auxiliaryInfo: nil)
        context.setFillColor(dimColor.cgColor)
        context.fill(canvas)
        context.setBlendMode(.clear)
        for overlay in overlays {
            context.addPath(overlay.spotlightPath)
            context.fillPath()
        }
        context.endTransparencyLayer()
        context.restoreGState()
    }
}
