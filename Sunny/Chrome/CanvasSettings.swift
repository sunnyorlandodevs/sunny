import AppKit
import Observation

/// Current tool and style, shared between the SwiftUI palette and the canvas.
/// Remembered across windows and launches (each capture opens a fresh window), the way
/// the original kept them in NSUserDefaults. Style defaults mirror `Graphic
/// registerDefaults` (yellow, medium, shadow on).
@Observable
final class CanvasSettings {
    enum Style { case color, size, shadow }

    private enum Key {
        static let tool = "tool", color = "color", size = "size", shadow = "hasShadow"
    }

    @ObservationIgnored private let defaults = UserDefaults.standard

    var tool: Tool {
        didSet {
            // Crop is a one-off action; don't come back to it on the next capture.
            if tool != .crop {
                defaults.set(tool.rawValue, forKey: Key.tool)
                lastDrawingTool = tool
            }
            onToolChange?()
        }
    }

    /// The tool to return to after a crop.
    @ObservationIgnored private(set) var lastDrawingTool: Tool = .arrowNormal

    /// A crop frame is on the canvas; the toolbar shows Cancel / Crop.
    var isCropPending = false
    var color: NSColor {
        didSet {
            if let data = try? JSONEncoder().encode(CodableColor(color)) { defaults.set(data, forKey: Key.color) }
            onStyleChange?(.color)
        }
    }
    var size: Int { didSet { defaults.set(size, forKey: Key.size); onStyleChange?(.size) } }
    var hasShadow: Bool { didSet { defaults.set(hasShadow, forKey: Key.shadow); onStyleChange?(.shadow) } }

    /// The canvas listens so a style change also restyles the current selection.
    @ObservationIgnored var onStyleChange: ((Style) -> Void)?
    @ObservationIgnored var onToolChange: (() -> Void)?
    /// The toolbar's crop buttons: true = apply, false = cancel.
    @ObservationIgnored var onCropCommand: ((Bool) -> Void)?

    init() {
        let defaults = UserDefaults.standard
        let storedTool = Tool(rawValue: defaults.object(forKey: Key.tool) as? Int ?? -1)
        let initialTool = storedTool.flatMap { $0.isAvailable && $0 != .crop ? $0 : nil } ?? .arrowNormal
        tool = initialTool
        lastDrawingTool = initialTool
        color = (defaults.data(forKey: Key.color))
            .flatMap { try? JSONDecoder().decode(CodableColor.self, from: $0) }?.nsColor ?? Graphic.defaultColor
        size = defaults.object(forKey: Key.size) as? Int ?? 1
        hasShadow = defaults.object(forKey: Key.shadow) as? Bool ?? true
    }
}
