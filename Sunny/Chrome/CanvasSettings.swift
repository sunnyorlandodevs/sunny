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

    var tool: Tool { didSet { defaults.set(tool.rawValue, forKey: Key.tool) } }
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

    init() {
        let defaults = UserDefaults.standard
        let storedTool = Tool(rawValue: defaults.object(forKey: Key.tool) as? Int ?? -1)
        tool = storedTool.flatMap { $0.isAvailable ? $0 : nil } ?? .arrowNormal
        color = (defaults.data(forKey: Key.color))
            .flatMap { try? JSONDecoder().decode(CodableColor.self, from: $0) }?.nsColor ?? Graphic.defaultColor
        size = defaults.object(forKey: Key.size) as? Int ?? 1
        hasShadow = defaults.object(forKey: Key.shadow) as? Bool ?? true
    }
}
