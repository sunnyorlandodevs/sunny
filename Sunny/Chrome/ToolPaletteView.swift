import SwiftUI

/// Left side of the title bar: one button per tool.
struct ToolsBar: View {
    @Bindable var settings: CanvasSettings

    var body: some View {
        HStack(spacing: 2) {
            ForEach(Tool.paletteOrder.filter(\.isAvailable)) { tool in
                if tool == .crop { Divider().frame(height: 18).padding(.horizontal, 4) }
                ToolButton(tool: tool, isSelected: settings.tool == tool) { settings.tool = tool }
            }
        }
        .padding(.horizontal, 4)
        .fixedSize()
    }
}

private struct ToolButton: View {
    let tool: Tool
    let isSelected: Bool
    let action: () -> Void
    @State private var isHovered = false

    var body: some View {
        Button(action: action) {
            Image(systemName: tool.symbolName)
                .font(.system(size: 15, weight: .medium))
                .frame(width: 34, height: 28)
                .foregroundStyle(isSelected ? Color.white : Color.primary)
                .background(background, in: RoundedRectangle(cornerRadius: 7, style: .continuous))
                .contentShape(Rectangle())
        }
        .buttonStyle(.plain)
        .onHover { isHovered = $0 }
        .help(tool.title)
        .accessibilityLabel(tool.title)
        .accessibilityAddTraits(isSelected ? .isSelected : [])
    }

    private var background: Color {
        if isSelected { return .accentColor }
        return isHovered ? Color.primary.opacity(0.08) : .clear
    }
}

/// Right side of the title bar: color, size and shadow, or Cancel / Crop while cropping.
struct StyleBar: View {
    @Bindable var settings: CanvasSettings
    @State private var showsColors = false

    var body: some View {
        HStack(spacing: 10) {
            if settings.isCropPending {
                Button("Cancel") { settings.onCropCommand?(false) }
                    .controlSize(.large)
                Button("Crop") { settings.onCropCommand?(true) }
                    .controlSize(.large)
                    .buttonStyle(.borderedProminent)
                    .help("Crop to the frame (Return)")
            } else {
                colorButton
                SizePicker(size: $settings.size, help: settings.tool.sizeLabel)
                shadowButton
            }
        }
        .padding(.horizontal, 4)
        .fixedSize()
    }

    private var colorButton: some View {
        Button { showsColors.toggle() } label: {
            Circle()
                .fill(Color(nsColor: settings.color))
                .overlay(Circle().strokeBorder(Color.primary.opacity(0.25), lineWidth: 1))
                .frame(width: 22, height: 22)
                .padding(3)
                .contentShape(Rectangle())
        }
        .buttonStyle(.plain)
        .help("Color")
        .accessibilityLabel("Color")
        .popover(isPresented: $showsColors, arrowEdge: .bottom) {
            ColorGrid(color: $settings.color) { showsColors = false }
        }
    }

    private var shadowButton: some View {
        Button { settings.hasShadow.toggle() } label: {
            ShadowIcon(isOn: settings.hasShadow)
                .frame(width: 34, height: 28)
                .background(settings.hasShadow ? Color.primary.opacity(0.1) : .clear,
                            in: RoundedRectangle(cornerRadius: 7, style: .continuous))
                .contentShape(Rectangle())
        }
        .buttonStyle(.plain)
        .help(settings.hasShadow ? "Shadow on" : "Shadow off")
        .accessibilityLabel("Shadow")
        .accessibilityValue(settings.hasShadow ? "On" : "Off")
    }
}

/// A square casting a soft shadow; the shadow disappears when it's off.
private struct ShadowIcon: View {
    let isOn: Bool

    var body: some View {
        ZStack {
            RoundedRectangle(cornerRadius: 3)
                .fill(Color.primary.opacity(isOn ? 0.55 : 0))
                .frame(width: 13, height: 13)
                .offset(x: 2.5, y: 2.5)
                .blur(radius: 1.5)
            RoundedRectangle(cornerRadius: 3)
                .fill(Color(nsColor: .windowBackgroundColor))
                .frame(width: 13, height: 13)
            RoundedRectangle(cornerRadius: 3)
                .strokeBorder(Color.primary, lineWidth: 1.5)
                .frame(width: 13, height: 13)
        }
    }
}

/// Three dots of growing size: small, medium, large.
private struct SizePicker: View {
    @Binding var size: Int
    let help: String

    var body: some View {
        HStack(spacing: 0) {
            ForEach(0..<3, id: \.self) { index in
                Button { size = index } label: {
                    Circle()
                        .frame(width: [5, 8, 12][index], height: [5, 8, 12][index])
                        .frame(width: 26, height: 24)
                        .foregroundStyle(size == index ? Color.white : Color.primary.opacity(0.75))
                        .background(size == index ? Color.accentColor : .clear,
                                    in: RoundedRectangle(cornerRadius: 6, style: .continuous))
                        .contentShape(Rectangle())
                }
                .buttonStyle(.plain)
                .accessibilityLabel(["Small", "Medium", "Large"][index])
            }
        }
        .padding(2)
        .background(Color.primary.opacity(0.06), in: RoundedRectangle(cornerRadius: 8, style: .continuous))
        .help(help.isEmpty ? "Size" : help)
    }
}

/// The color popover: preset swatches plus the system picker for anything else.
private struct ColorGrid: View {
    @Binding var color: NSColor
    let dismiss: () -> Void

    private static let swatches: [NSColor] = [
        Graphic.defaultColor, .systemOrange, .systemRed, .systemPink,
        .systemPurple, .systemBlue, .systemGreen, .black, .white,
    ]

    var body: some View {
        VStack(alignment: .leading, spacing: 12) {
            LazyVGrid(columns: Array(repeating: GridItem(.fixed(28), spacing: 8), count: 5), spacing: 8) {
                ForEach(Self.swatches, id: \.self) { swatch in
                    Button {
                        color = swatch
                        dismiss()
                    } label: {
                        Circle()
                            .fill(Color(nsColor: swatch))
                            .overlay(Circle().strokeBorder(Color.primary.opacity(0.2), lineWidth: 1))
                            .overlay(Circle().strokeBorder(Color.accentColor, lineWidth: 2.5).padding(-4)
                                .opacity(CodableColor(swatch) == CodableColor(color) ? 1 : 0))
                            .frame(width: 24, height: 24)
                    }
                    .buttonStyle(.plain)
                }
            }
            ColorPicker("Custom…", selection: Binding(get: { Color(nsColor: color) },
                                                      set: { color = NSColor($0) }),
                        supportsOpacity: false)
                .font(.callout)
        }
        .padding(14)
    }
}
