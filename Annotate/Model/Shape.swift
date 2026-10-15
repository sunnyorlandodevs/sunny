import AppKit

/// Stroked outline shapes (`Shape` in the original): rectangle and ellipse.
///
/// Four corner handles: 0 = top-left, 1 = top-right, 2 = bottom-right, 3 = bottom-left.
/// Handles 0/3 own the left edge, 1/2 the right edge, 0/1 the top, 2/3 the bottom.
class Shape: Graphic {
    override class var numberOfHandles: Int { 4 }
    override class var creationSizingHandle: Int { 2 }

    private var cachedPath: CGPath?
    private var cachedHitTestPath: CGPath?

    override var zIndex: Int { 3 }

    override func invalidateCaches() {
        cachedPath = nil
        cachedHitTestPath = nil
    }

    /// The rectangle spanned by the four corner handles.
    var rect: CGRect {
        CGRect(x: handles[0].x, y: handles[0].y,
               width: handles[2].x - handles[0].x, height: handles[2].y - handles[0].y)
    }

    /// Subclasses build their outline from `rect`.
    func makePath() -> CGPath { CGPath(rect: rect, transform: nil) }

    var drawingPath: CGPath {
        if let cachedPath { return cachedPath }
        let path = makePath()
        cachedPath = path
        return path
    }

    /// The outline stroked at max(10, strokeWidth) so thin shapes are still easy to grab.
    /// Like the original, clicking the hollow middle of a shape doesn't select it.
    var hitTestPath: CGPath {
        if let cachedHitTestPath { return cachedHitTestPath }
        let path = drawingPath.copy(strokingWithWidth: max(10, strokeWidth),
                                    lineCap: .butt, lineJoin: .miter, miterLimit: 10)
        cachedHitTestPath = path
        return path
    }

    override var drawingBounds: CGRect {
        let inset = -7 - strokeWidth * 0.5
        return drawingPath.boundingBox.insetBy(dx: inset, dy: inset)
    }

    /// Area must exceed 15pt² (zero dimensions count as 1) or the shape is discarded.
    override var isValidAfterCreation: Bool {
        let bounds = drawingPath.boundingBox
        let w = bounds.width == 0 ? 1 : bounds.width
        let h = bounds.height == 0 ? 1 : bounds.height
        return w * h > 15
    }

    override func isContentsUnderPoint(_ point: CGPoint) -> Bool {
        hitTestPath.contains(point)
    }

    /// Port of `Shape resizeByMovingHandle:withDelta:toLocation:`.
    override func resize(movingHandle handle: Int, by delta: CGVector) -> Int {
        var left = handles[0].x, right = handles[2].x
        var top = handles[0].y, bottom = handles[2].y
        var handle = handle

        if handle == 0 || handle == 3 { left += delta.dx } else { right += delta.dx }
        if right < left {
            swap(&left, &right)
            handle = [1, 0, 3, 2][handle]
        }

        if handle == 0 || handle == 1 { top += delta.dy } else { bottom += delta.dy }
        if bottom < top {
            swap(&top, &bottom)
            handle = [3, 2, 1, 0][handle]
        }

        handles = [CGPoint(x: left, y: top), CGPoint(x: right, y: top),
                   CGPoint(x: right, y: bottom), CGPoint(x: left, y: bottom)]
        return handle
    }

    override func drawContents(in context: CGContext, isBeingCreated: Bool) {
        context.saveGState()
        applyShadowIfNeeded(in: context)
        context.setStrokeColor(color.cgColor)
        context.setLineWidth(strokeWidth)
        context.addPath(drawingPath)
        context.strokePath()
        context.restoreGState()
    }
}
