import AppKit

/// Outlined ellipse — tool 5. Same handles and resizing as the rectangle,
/// `bezierPathWithOvalInRect:` over the handles.
final class ShapeCircle: Shape {
    override class var tool: Tool { .shapeCircle }

    override func makePath() -> CGPath { CGPath(ellipseIn: rect, transform: nil) }
}
