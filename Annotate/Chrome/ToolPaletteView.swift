import SwiftUI

/// The bar above the canvas: the 10 tools, then color / stroke size / shadow.
struct ToolPaletteView: View {
    @Bindable var settings: CanvasSettings

    private static let swatches: [NSColor] = [
        Graphic.defaultColor, .systemRed, .systemOrange, .systemGreen,
        .systemBlue, .systemPurple, .black, .white,
    ]

    var body: some View {
        HStack(spacing: 12) {
            HStack(spacing: 2) {
                ForEach(Tool.allCases) { tool in
                    Button {
                        settings.tool = tool
                    } label: {
                        Image(systemName: tool.symbolName)
                            .frame(width: 28, height: 24)
                            .background(settings.tool == tool ? Color.accentColor.opacity(0.25) : .clear,
                                        in: RoundedRectangle(cornerRadius: 5))
                    }
                    .buttonStyle(.borderless)
                    .disabled(!tool.isAvailable)
                    .help(tool.isAvailable ? tool.title : "\(tool.title) (not ported yet)")
                }
            }

            Divider().frame(height: 20)

            HStack(spacing: 4) {
                ForEach(Self.swatches, id: \.self) { swatch in
                    Button {
                        settings.color = swatch
                    } label: {
                        Circle()
                            .fill(Color(nsColor: swatch))
                            .overlay(Circle().strokeBorder(.secondary.opacity(0.5), lineWidth: 0.5))
                            .frame(width: 16, height: 16)
                    }
                    .buttonStyle(.plain)
                }
                ColorPicker("Color", selection: colorBinding, supportsOpacity: false)
                    .labelsHidden()
            }

            Picker("Size", selection: $settings.size) {
                Text("S").tag(0)
                Text("M").tag(1)
                Text("L").tag(2)
            }
            .pickerStyle(.segmented)
            .labelsHidden()
            .frame(width: 96)
            .help("Stroke size")

            Toggle("Shadow", isOn: $settings.hasShadow)
                .toggleStyle(.checkbox)

            Spacer(minLength: 0)
        }
        .padding(.horizontal, 12)
        .padding(.vertical, 6)
    }

    private var colorBinding: Binding<Color> {
        Binding(get: { Color(nsColor: settings.color) },
                set: { settings.color = NSColor($0) })
    }
}
