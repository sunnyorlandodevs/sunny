import AppKit

/// Filled arrow — tool 0. Port of `ArrowNormal drawingPath` + `Arrow drawContentsInView:`.
///
/// Two handles: 0 = tip (where the drag starts), 1 = tail (follows the drag). That's the
/// original's default (`kInvertArrowKey` off): you press where the arrow should point
/// and pull back to where it comes from.
final class ArrowNormal: Graphic {
    override class var tool: Tool { .arrowNormal }
    override class var numberOfHandles: Int { 2 }
    override class var creationSizingHandle: Int { 1 }

    override var zIndex: Int { 4 }

    /// Per size: shaft half-width at the tail (a), at the head base (b), head half-width (c).
    /// Head length is 1.6c.
    private static let dimensions: [(a: CGFloat, b: CGFloat, c: CGFloat)] = [
        (1.0, 2.5, 12), (1.5, 3.0, 15), (2.0, 4.5, 24),
    ]

    private var cachedPath: CGPath?

    override func invalidateCaches() { cachedPath = nil }

    var tip: CGPoint { handles[0] }
    var tail: CGPoint { handles[1] }

    /// One closed polygon: triangular head plus a shaft that tapers toward the tail.
    /// Shorter than the head → just the head, scaled down.
    var drawingPath: CGPath {
        if let cachedPath { return cachedPath }
        let (a, b, c) = Self.dimensions[min(max(size, 0), 2)]
        let length = c * 1.6
        let dx = tail.x - tip.x, dy = tail.y - tip.y
        let distance = hypot(dx, dy)
        let path = CGMutablePath()
        if distance > 0 {
            let dir = CGPoint(x: dx / distance, y: dy / distance)
            let perp = CGPoint(x: dir.y, y: -dir.x)
            func p(_ origin: CGPoint, _ along: CGFloat, _ across: CGFloat) -> CGPoint {
                CGPoint(x: origin.x + dir.x * along + perp.x * across,
                        y: origin.y + dir.y * along + perp.y * across)
            }
            let points: [CGPoint]
            if distance <= length {
                let k = distance / length
                points = [tip, p(tip, k * length, k * c), p(tip, k * length, -k * c)]
            } else {
                points = [tip, p(tip, length, c), p(tip, length, b), p(tail, 0, a),
                          tail, p(tail, 0, -a), p(tip, length, -b), p(tip, length, -c)]
            }
            path.addLines(between: points)
            path.closeSubpath()
        }
        cachedPath = path
        return path
    }

    override var drawingBounds: CGRect {
        let inset = -(7 + CGFloat(size) * 0.5)
        return drawingPath.boundingBox.insetBy(dx: inset, dy: inset)
    }

    override var isValidAfterCreation: Bool { hypot(tail.x - tip.x, tail.y - tip.y) > 7 }

    override func isContentsUnderPoint(_ point: CGPoint) -> Bool {
        drawingPath.contains(point)
            || drawingPath.copy(strokingWithWidth: 10, lineCap: .butt, lineJoin: .miter, miterLimit: 10)
                .contains(point)
    }

    override func resize(movingHandle handle: Int, by delta: CGVector) -> Int {
        handles[handle].x += delta.dx
        handles[handle].y += delta.dy
        return handle
    }

    override func drawContents(in context: CGContext, isBeingCreated: Bool) {
        context.saveGState()
        applyShadowIfNeeded(in: context)
        context.setFillColor(color.cgColor)
        context.addPath(drawingPath)
        context.fillPath()
        context.restoreGState()
    }
}
