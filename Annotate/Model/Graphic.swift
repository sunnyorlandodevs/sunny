import AppKit

/// Abstract base for everything drawn on top of the image (`Graphic` in the original).
///
/// Geometry lives entirely in `handles`, in canvas coordinates (flipped, origin at the
/// image's top-left). The original stores a fixed 8-point struct; subclasses declare how
/// many of those slots they use via `numberOfHandles`.
class Graphic {
    /// Stroke widths indexed by `size` (`Graphic strokeWidthForSize:` → @[2, 4, 8]).
    static let strokeWidths: [CGFloat] = [2, 4, 8]

    /// `Graphic defaultColor` — sRGB (1, 0.906, 0), the original's signature yellow.
    static let defaultColor = NSColor(srgbRed: 1, green: 0.906, blue: 0, alpha: 1)

    class var tool: Tool { fatalError("Subclasses must override tool") }
    class var numberOfHandles: Int { 0 }
    class var hiddenHandles: Set<Int> { [] }
    /// The handle that follows the mouse while the graphic is being created.
    class var creationSizingHandle: Int { 0 }

    var color: NSColor
    /// Index into `strokeWidths` (0 = small, 1 = medium, 2 = large).
    var size: Int
    var hasShadow: Bool
    var handles: [CGPoint] { didSet { invalidateCaches() } }

    /// `initAtPoint:inWindow:` — every handle starts at the click point.
    required init(at point: CGPoint, color: NSColor, size: Int, hasShadow: Bool) {
        self.color = color
        self.size = size
        self.hasShadow = hasShadow
        self.handles = Array(repeating: point, count: Self.numberOfHandles)
    }

    var strokeWidth: CGFloat {
        Self.strokeWidths[min(max(size, 0), Self.strokeWidths.count - 1)]
    }

    var zIndex: Int { 0 }

    func invalidateCaches() {}

    // MARK: Geometry

    /// Area that needs redrawing, including stroke, shadow and handle overhang.
    var drawingBounds: CGRect { .null }

    /// Whether a freshly drawn graphic is big enough to keep (`didGetCreated`).
    var isValidAfterCreation: Bool { true }

    func isContentsUnderPoint(_ point: CGPoint) -> Bool { false }

    /// Where the handles are drawn and grabbed. Usually the stored geometry itself;
    /// text derives them from its laid-out box.
    var handlePoints: [CGPoint] { handles }

    func handle(under point: CGPoint) -> Int? {
        let points = handlePoints
        for index in points.indices where !Self.hiddenHandles.contains(index) {
            if Graphic.handleRect(at: points[index]).contains(point) { return index }
        }
        return nil
    }

    /// Moves `handle` by `delta` and returns the handle now under the mouse (it changes
    /// when the drag crosses an opposite edge and the shape flips).
    func resize(movingHandle handle: Int, by delta: CGVector) -> Int { handle }

    func translate(by delta: CGVector) {
        handles = handles.map { CGPoint(x: $0.x + delta.dx, y: $0.y + delta.dy) }
    }

    // MARK: Drawing

    func drawContents(in context: CGContext, isBeingCreated: Bool) {}

    /// Sets the drop shadow used by shapes (`drawContentsInView:` — black @ 50%, blur 2, 1pt down).
    func applyShadowIfNeeded(in context: CGContext) {
        guard hasShadow else { return }
        context.setShadow(offset: CGSize(width: 0, height: -1), blur: 2,
                          color: NSColor.black.withAlphaComponent(0.5).cgColor)
    }

    func drawHandles(in context: CGContext) {
        let points = handlePoints
        for index in points.indices where !Self.hiddenHandles.contains(index) {
            Graphic.drawHandle(at: points[index], in: context)
        }
    }

    // MARK: Handles (`drawHandle:inView:atPoint:`)

    static let handleSize: CGFloat = 10

    static func handleRect(at point: CGPoint) -> CGRect {
        CGRect(x: point.x - handleSize / 2, y: point.y - handleSize / 2,
               width: handleSize, height: handleSize)
    }

    /// Blue dot, white ring, soft shadow — same recipe and colors as the original.
    static func drawHandle(at point: CGPoint, in context: CGContext) {
        let rect = handleRect(at: point)
        context.saveGState()
        context.setShadow(offset: CGSize(width: 0, height: -1), blur: 2,
                          color: NSColor(deviceRed: 0, green: 0, blue: 0, alpha: 0.7).cgColor)
        context.setFillColor(NSColor(deviceRed: 0.043, green: 0.416, blue: 1, alpha: 1).cgColor)
        context.fillEllipse(in: rect)
        context.restoreGState()

        context.saveGState()
        context.setStrokeColor(NSColor.white.cgColor)
        context.setLineWidth(1.5)
        context.strokeEllipse(in: rect)
        context.restoreGState()
    }

    // MARK: Persistence & undo snapshots

    struct Record: Codable, Equatable {
        var tool: Tool
        var color: CodableColor
        var size: Int
        var hasShadow: Bool
        var handles: [CGPoint]
        /// Text boxes only: the string and the wrap width (nil = grows to fit).
        var text: String?
        var textWidth: CGFloat?
    }

    var record: Record {
        Record(tool: Self.tool, color: CodableColor(color), size: size,
               hasShadow: hasShadow, handles: handles, text: nil, textWidth: nil)
    }

    /// Subclasses with extra state override both `record` and `apply(_:)`.
    func apply(_ record: Record) {
        color = record.color.nsColor
        size = record.size
        hasShadow = record.hasShadow
        handles = record.handles
    }

    static func make(from record: Record) -> Graphic? {
        guard let type = record.tool.graphicClass else { return nil }
        let graphic = type.init(at: .zero, color: record.color.nsColor,
                                size: record.size, hasShadow: record.hasShadow)
        graphic.apply(record)
        return graphic
    }
}

/// sRGB color that round-trips through JSON.
struct CodableColor: Codable, Equatable {
    var red: CGFloat, green: CGFloat, blue: CGFloat, alpha: CGFloat

    init(_ color: NSColor) {
        let c = color.usingColorSpace(.sRGB) ?? Graphic.defaultColor
        red = c.redComponent; green = c.greenComponent; blue = c.blueComponent; alpha = c.alphaComponent
    }

    var nsColor: NSColor { NSColor(srgbRed: red, green: green, blue: blue, alpha: alpha) }
}
