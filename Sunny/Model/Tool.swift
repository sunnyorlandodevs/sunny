import AppKit

/// The original palette, decoded from `CanvasViewController graphicClassForTool:`.
/// Raw values match the original tool ids so they line up with the reference decomp.
enum Tool: Int, CaseIterable, Codable, Identifiable {
    case arrowNormal = 0
    case arrowLine = 1
    case overlayRectangle = 2
    case overlayCircle = 3
    case shapeRectangle = 4
    case shapeCircle = 5
    case pen = 6
    case text = 7
    case pixelate = 8
    case crop = 9
    /// Not in the original: a marker-style box.
    case highlight = 10

    var id: Int { rawValue }

    var title: String {
        switch self {
        case .arrowNormal: "Arrow"
        case .arrowLine: "Line"
        case .overlayRectangle: "Spotlight"
        case .overlayCircle: "Highlight Circle"
        case .shapeRectangle: "Rectangle"
        case .shapeCircle: "Ellipse"
        case .pen: "Pen"
        case .text: "Text"
        case .pixelate: "Pixelate"
        case .crop: "Crop"
        case .highlight: "Highlight"
        }
    }

    var symbolName: String {
        switch self {
        case .arrowNormal: "arrow.up.right"
        case .arrowLine: "line.diagonal"
        case .overlayRectangle: "rectangle.inset.filled"
        case .overlayCircle: "circle.dashed"
        case .shapeRectangle: "rectangle"
        case .shapeCircle: "circle"
        case .pen: "pencil.tip"
        case .text: "textformat"
        case .pixelate: "checkerboard.rectangle"
        case .crop: "crop"
        case .highlight: "highlighter"
        }
    }

    /// `graphicClassForTool:`. Only the tools ported so far return a class.
    var graphicClass: Graphic.Type? {
        switch self {
        case .arrowNormal: ArrowNormal.self
        case .overlayRectangle: OverlayRectangle.self
        case .shapeRectangle: ShapeRectangle.self
        case .shapeCircle: ShapeCircle.self
        case .text: TextBox.self
        case .pixelate: Pixelate.self
        case .highlight: Highlight.self
        default: nil
        }
    }

    /// Crop isn't a graphic: the canvas controller handles it directly.
    var isAvailable: Bool { graphicClass != nil || self == .crop }

    /// What the S/M/L control means for this tool.
    var sizeLabel: String {
        switch self {
        case .text: "Text size"
        case .pixelate: "Block size"
        case .highlight, .crop: ""
        default: "Line width"
        }
    }

    /// Palette order (not tool-id order): drawing tools, then the image tools.
    static let paletteOrder: [Tool] = [.arrowNormal, .shapeRectangle, .shapeCircle, .text, .highlight,
                                       .overlayRectangle, .pixelate, .crop,
                                       .arrowLine, .overlayCircle, .pen]
}
