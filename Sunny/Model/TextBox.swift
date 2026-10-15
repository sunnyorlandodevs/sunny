import AppKit

/// Outlined text box — tool 7 (`Text` in the original; rendering from `drawContentsWithOutline:andText:`).
///
/// Look: bold Helvetica Neue in the current color, with a 5pt round-joined outline under
/// it — black for light colors, white for dark ones. Dark colors also get a soft drop
/// shadow on the outline; the default yellow doesn't need one. Sizes S/M/L are 20/28/43pt.
///
/// The box sizes itself to its contents, anchored at the top-left. It grows to the right
/// until the user drags a side handle, which fixes the wrap width.
final class TextBox: Graphic {
    override class var tool: Tool { .text }
    /// 0 = left edge, 1 = right edge (both at mid-height), for setting the wrap width.
    override class var numberOfHandles: Int { 2 }

    override var zIndex: Int { 5 }

    static let fontSizes: [CGFloat] = [20, 28, 43]
    static let minimumWidth: CGFloat = 20

    var string = "" { didSet { invalidateCaches() } }
    /// Top-left of the text box.
    var origin = CGPoint.zero { didSet { invalidateCaches() } }
    /// nil → one line per paragraph, box as wide as the text.
    var wrapWidth: CGFloat? { didSet { invalidateCaches() } }

    required init(at point: CGPoint, color: NSColor, size: Int, hasShadow: Bool) {
        super.init(at: point, color: color, size: size, hasShadow: hasShadow)
        // Center the first line on the click point.
        origin = CGPoint(x: point.x, y: point.y - font.ascender.rounded() / 2 - 4)
    }

    var font: NSFont {
        let base = NSFont(name: "Helvetica Neue", size: fontSize) ?? .systemFont(ofSize: fontSize)
        return NSFontManager.shared.convert(base, toHaveTrait: .boldFontMask)
    }

    var fontSize: CGFloat { Self.fontSizes[min(max(size, 0), 2)] }

    private var cachedBounds: CGRect?

    override func invalidateCaches() { cachedBounds = nil }

    // MARK: Layout

    /// Laid out exactly like the editing NSTextView (no insets, no line fragment padding)
    /// so the caret lines up with the rendered glyphs.
    private func layout(_ attributes: [NSAttributedString.Key: Any], measuringEmpty: Bool = false)
        -> (NSLayoutManager, NSTextContainer, NSTextStorage) {
        let content = string.isEmpty && measuringEmpty ? "I" : string
        let storage = NSTextStorage(string: content, attributes: attributes)
        let container = NSTextContainer(size: CGSize(width: wrapWidth ?? .greatestFiniteMagnitude,
                                                     height: .greatestFiniteMagnitude))
        container.lineFragmentPadding = 0
        let manager = NSLayoutManager()
        manager.addTextContainer(container)
        storage.addLayoutManager(manager)
        manager.ensureLayout(for: container)
        return (manager, container, storage)
    }

    private var fillAttributes: [NSAttributedString.Key: Any] {
        [.font: font, .foregroundColor: color]
    }

    /// The text box (`bounds` in the original).
    var bounds: CGRect {
        if let cachedBounds { return cachedBounds }
        let (manager, container, storage) = layout(fillAttributes, measuringEmpty: true)
        // NSLayoutManager doesn't retain its storage; keep it alive while measuring.
        let used = withExtendedLifetime(storage) { manager.usedRect(for: container) }
        let width = wrapWidth ?? (string.isEmpty ? 2 : ceil(used.width))
        let rect = CGRect(origin: origin, size: CGSize(width: width, height: ceil(used.height)))
        cachedBounds = rect
        return rect
    }

    /// Frame for the editing NSTextView: the box, with room for the caret when empty.
    var textFrame: CGRect {
        var frame = bounds
        frame.size.width = max(frame.width, 4)
        return frame
    }

    /// The visible selection box, a little outside the glyphs.
    var selectionFrame: CGRect { textFrame.insetBy(dx: -4, dy: -2) }

    override var handlePoints: [CGPoint] {
        let box = selectionFrame
        return [CGPoint(x: box.minX, y: box.midY), CGPoint(x: box.maxX, y: box.midY)]
    }

    override var drawingBounds: CGRect { bounds.insetBy(dx: -7, dy: -24) }

    override var isValidAfterCreation: Bool {
        !string.trimmingCharacters(in: .whitespacesAndNewlines).isEmpty
    }

    override func isContentsUnderPoint(_ point: CGPoint) -> Bool { bounds.contains(point) }

    override func translate(by delta: CGVector) {
        origin = CGPoint(x: origin.x + delta.dx, y: origin.y + delta.dy)
    }

    /// Side handles set the wrap width; the height follows the text.
    override func resize(movingHandle handle: Int, by delta: CGVector) -> Int {
        var box = bounds
        if handle == 0 {
            let dx = min(delta.dx, box.width - Self.minimumWidth)
            box.origin.x += dx
            box.size.width -= dx
        } else {
            box.size.width = max(box.width + delta.dx, Self.minimumWidth)
        }
        origin = box.origin
        wrapWidth = box.width
        return handle
    }

    // MARK: Drawing

    /// Same test the original uses to pick the outline color (`NSColor isLight`).
    private var colorIsLight: Bool {
        let c = color.usingColorSpace(.sRGB) ?? color
        return 0.2126 * c.redComponent + 0.7152 * c.greenComponent + 0.0722 * c.blueComponent >= 0.6
    }

    /// Stroke width as a percentage of the font size (NSStrokeWidthAttributeName). A
    /// positive value strokes without filling; the stroke is 2w wide so w shows outside.
    private var outlinePercent: CGFloat {
        let w = max(2.5, ceil(fontSize / 24))
        return 2 * w / fontSize * 100
    }

    override func drawContents(in context: CGContext, isBeingCreated: Bool) {
        guard !string.isEmpty else { return }
        NSGraphicsContext.saveGraphicsState()
        NSGraphicsContext.current = NSGraphicsContext(cgContext: context, flipped: true)
        context.saveGState()

        // 1. Outline, as one layer so overlapping glyph strokes share a single shadow.
        let outlineShadow = hasShadow && !colorIsLight
        if outlineShadow {
            context.setShadow(offset: CGSize(width: 0, height: -1), blur: 2,
                              color: NSColor.black.withAlphaComponent(0.5).cgColor)
        }
        context.beginTransparencyLayer(auxiliaryInfo: nil)
        context.setLineJoin(.round)
        var outline = fillAttributes
        outline[.strokeWidth] = outlinePercent
        outline[.strokeColor] = colorIsLight ? NSColor.black : NSColor.white
        drawGlyphs(outline)
        context.endTransparencyLayer()
        context.setShadow(offset: .zero, blur: 0, color: nil)

        // 2. Fill on top, hiding the inner half of the stroke.
        drawGlyphs(fillAttributes)

        context.restoreGState()
        NSGraphicsContext.restoreGraphicsState()
    }

    private func drawGlyphs(_ attributes: [NSAttributedString.Key: Any]) {
        let (manager, container, storage) = layout(attributes)
        withExtendedLifetime(storage) {
            manager.drawGlyphs(forGlyphRange: manager.glyphRange(for: container), at: origin)
        }
    }

    /// Solid 1pt blue box plus the two width handles (`drawSelectionInView:`).
    override func drawHandles(in context: CGContext) {
        context.saveGState()
        context.setStrokeColor(NSColor(deviceRed: 25 / 255, green: 128 / 255, blue: 239 / 255, alpha: 1).cgColor)
        context.setLineWidth(1)
        context.stroke(selectionFrame.insetBy(dx: 0.5, dy: 0.5))
        context.restoreGState()
        super.drawHandles(in: context)
    }

    // MARK: Undo / persistence

    override var record: Record {
        var record = super.record
        record.handles = [origin]
        record.text = string
        record.textWidth = wrapWidth
        return record
    }

    override func apply(_ record: Record) {
        super.apply(record)
        origin = record.handles.first ?? origin
        string = record.text ?? ""
        wrapWidth = record.textWidth
        invalidateCaches()
    }
}
