import AppKit
import Observation

/// Current tool and style, shared between the SwiftUI palette and the canvas.
/// Style defaults mirror `Graphic registerDefaults` (yellow, medium, shadow on).
@Observable
final class CanvasSettings {
    enum Style { case color, size, shadow }

    var tool: Tool = .shapeRectangle
    var color: NSColor = Graphic.defaultColor { didSet { onStyleChange?(.color) } }
    var size: Int = 1 { didSet { onStyleChange?(.size) } }
    var hasShadow: Bool = true { didSet { onStyleChange?(.shadow) } }

    /// The canvas listens so a style change also restyles the current selection.
    @ObservationIgnored var onStyleChange: ((Style) -> Void)?
}
