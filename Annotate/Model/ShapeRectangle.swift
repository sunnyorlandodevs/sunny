import AppKit

/// Outlined rectangle — tool 4. `drawingPath` is `bezierPathWithRect:` over the handles.
final class ShapeRectangle: Shape {
    override class var tool: Tool { .shapeRectangle }
}
