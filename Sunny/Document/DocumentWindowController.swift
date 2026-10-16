import AppKit
import SwiftUI

/// One window per document: SwiftUI tool palette on top, AppKit canvas below.
final class DocumentWindowController: NSWindowController {
    let settings = CanvasSettings()
    let canvasController: CanvasViewController

    init(document: Document) {
        canvasController = CanvasViewController(document: document, settings: settings)

        let palette = NSHostingView(rootView: ToolPaletteView(settings: settings))
        palette.translatesAutoresizingMaskIntoConstraints = false
        let canvas = canvasController.view
        canvas.translatesAutoresizingMaskIntoConstraints = false
        let separator = NSBox()
        separator.boxType = .separator
        separator.translatesAutoresizingMaskIntoConstraints = false

        let container = NSView()
        container.addSubview(palette)
        container.addSubview(separator)
        container.addSubview(canvas)
        NSLayoutConstraint.activate([
            palette.topAnchor.constraint(equalTo: container.topAnchor),
            palette.leadingAnchor.constraint(equalTo: container.leadingAnchor),
            palette.trailingAnchor.constraint(equalTo: container.trailingAnchor),
            separator.topAnchor.constraint(equalTo: palette.bottomAnchor),
            separator.leadingAnchor.constraint(equalTo: container.leadingAnchor),
            separator.trailingAnchor.constraint(equalTo: container.trailingAnchor),
            canvas.topAnchor.constraint(equalTo: separator.bottomAnchor),
            canvas.leadingAnchor.constraint(equalTo: container.leadingAnchor),
            canvas.trailingAnchor.constraint(equalTo: container.trailingAnchor),
            canvas.bottomAnchor.constraint(equalTo: container.bottomAnchor),
        ])

        // Fit the window to the image exactly so no background shows around it.
        // Large captures are scaled down to fit the visible screen area instead.
        let visible = NSScreen.main?.visibleFrame.size ?? CGSize(width: 1440, height: 900)
        let chromeHeight = palette.fittingSize.height + 1
        let minWidth = palette.fittingSize.width
        let image = document.canvasSize
        let scale = min(1, visible.width * 0.9 / max(image.width, 1),
                        (visible.height * 0.9 - chromeHeight) / max(image.height, 1))
        let contentSize = CGSize(width: max(ceil(image.width * scale), minWidth),
                                 height: ceil(image.height * scale) + chromeHeight)
        let window = NSWindow(contentRect: CGRect(origin: .zero, size: contentSize),
                              styleMask: [.titled, .closable, .miniaturizable, .resizable],
                              backing: .buffered, defer: false)
        window.contentMinSize = CGSize(width: minWidth, height: chromeHeight + 100)
        window.contentView = container
        window.center()
        canvasController.scrollView.magnification = scale

        super.init(window: window)
        window.makeFirstResponder(canvasController.canvasView)
    }

    @available(*, unavailable)
    required init?(coder: NSCoder) { fatalError("init(coder:) is not supported") }

    // MARK: Toast

    private var toast: NSView?

    /// Brief HUD in the middle of the window, then fades out.
    func showToast(_ message: String) {
        guard let content = window?.contentView else { return }
        toast?.removeFromSuperview()

        let hud = NSVisualEffectView()
        hud.material = .hudWindow
        hud.blendingMode = .withinWindow
        hud.state = .active
        hud.wantsLayer = true
        hud.layer?.cornerRadius = 14
        hud.translatesAutoresizingMaskIntoConstraints = false

        let icon = NSImageView(image: NSImage(systemSymbolName: "checkmark.circle.fill",
                                              accessibilityDescription: nil) ?? NSImage())
        icon.symbolConfiguration = .init(pointSize: 34, weight: .medium)
        icon.contentTintColor = .labelColor
        let label = NSTextField(labelWithString: message)
        label.font = .systemFont(ofSize: 15, weight: .semibold)
        let stack = NSStackView(views: [icon, label])
        stack.orientation = .vertical
        stack.spacing = 8
        stack.edgeInsets = NSEdgeInsets(top: 18, left: 26, bottom: 16, right: 26)
        stack.translatesAutoresizingMaskIntoConstraints = false
        hud.addSubview(stack)
        content.addSubview(hud)
        NSLayoutConstraint.activate([
            stack.topAnchor.constraint(equalTo: hud.topAnchor),
            stack.bottomAnchor.constraint(equalTo: hud.bottomAnchor),
            stack.leadingAnchor.constraint(equalTo: hud.leadingAnchor),
            stack.trailingAnchor.constraint(equalTo: hud.trailingAnchor),
            hud.centerXAnchor.constraint(equalTo: content.centerXAnchor),
            hud.centerYAnchor.constraint(equalTo: content.centerYAnchor),
        ])
        toast = hud
        NSAccessibility.post(element: hud, notification: .announcementRequested,
                             userInfo: [.announcement: message, .priority: NSAccessibilityPriorityLevel.high.rawValue])

        DispatchQueue.main.asyncAfter(deadline: .now() + 1.2) { [weak self, weak hud] in
            guard let hud else { return }
            NSAnimationContext.runAnimationGroup({ context in
                context.duration = 0.35
                hud.animator().alphaValue = 0
            }, completionHandler: {
                // AppKit calls this on the main thread.
                MainActor.assumeIsolated {
                    hud.removeFromSuperview()
                    if self?.toast === hud { self?.toast = nil }
                }
            })
        }
    }
}
