import AppKit
import SwiftUI

/// One window per document: the tools live in the title bar (a unified toolbar with
/// SwiftUI items), and the canvas fills the rest of the window.
final class DocumentWindowController: NSWindowController, NSToolbarDelegate {
    let settings = CanvasSettings()
    let canvasController: CanvasViewController

    private static let toolsItem = NSToolbarItem.Identifier("tools")
    private static let styleItem = NSToolbarItem.Identifier("style")

    private lazy var toolsView = NSHostingView(rootView: ToolsBar(settings: settings))
    private lazy var styleView = NSHostingView(rootView: StyleBar(settings: settings))

    init(document: Document) {
        canvasController = CanvasViewController(document: document, settings: settings)

        let window = NSWindow(contentRect: CGRect(x: 0, y: 0, width: 800, height: 600),
                              styleMask: [.titled, .closable, .miniaturizable, .resizable],
                              backing: .buffered, defer: false)
        window.titleVisibility = .hidden
        window.toolbarStyle = .unified
        window.contentView = canvasController.view
        super.init(window: window)

        let toolbar = NSToolbar(identifier: "SunnyToolbar")
        toolbar.delegate = self
        toolbar.displayMode = .iconOnly
        toolbar.allowsUserCustomization = false
        window.toolbar = toolbar

        canvasController.onCanvasResize = { [weak self] in self?.fitWindowToCanvas(recenter: false) }
        fitWindowToCanvas(recenter: true)
        window.makeFirstResponder(canvasController.canvasView)
    }

    @available(*, unavailable)
    required init?(coder: NSCoder) { fatalError("init(coder:) is not supported") }

    /// Sizes the window to the image exactly so no background shows around it. Large
    /// images are scaled down to fit the screen; small ones can't go narrower than the toolbar.
    func fitWindowToCanvas(recenter: Bool) {
        guard let window, let document = canvasController.document else { return }
        let minWidth = toolsView.fittingSize.width + styleView.fittingSize.width + 110
        let screen = window.screen ?? NSScreen.main
        let visible = screen?.visibleFrame ?? CGRect(x: 0, y: 0, width: 1440, height: 900)
        let titlebar = window.frame.height - window.contentLayoutRect.height
        let image = document.canvasSize
        let scale = min(1, visible.width * 0.9 / max(image.width, 1),
                        (visible.height * 0.9 - titlebar) / max(image.height, 1))
        let content = CGSize(width: max(ceil(image.width * scale), minWidth),
                             height: max(ceil(image.height * scale), 120))
        window.contentMinSize = CGSize(width: minWidth, height: 120)
        canvasController.scrollView.magnification = scale

        if recenter {
            window.setContentSize(content)
            window.center()
        } else {
            // Keep the window's top-left corner where it is (crop, undo).
            var frame = window.frameRect(forContentRect: CGRect(origin: .zero, size: content))
            frame.origin = CGPoint(x: window.frame.minX, y: window.frame.maxY - frame.height)
            window.setFrame(frame, display: true, animate: false)
        }
    }

    // MARK: Toolbar

    func toolbarDefaultItemIdentifiers(_ toolbar: NSToolbar) -> [NSToolbarItem.Identifier] {
        [Self.toolsItem, .flexibleSpace, Self.styleItem]
    }

    func toolbarAllowedItemIdentifiers(_ toolbar: NSToolbar) -> [NSToolbarItem.Identifier] {
        toolbarDefaultItemIdentifiers(toolbar)
    }

    func toolbar(_ toolbar: NSToolbar, itemForItemIdentifier identifier: NSToolbarItem.Identifier,
                 willBeInsertedIntoToolbar flag: Bool) -> NSToolbarItem? {
        let item = NSToolbarItem(itemIdentifier: identifier)
        switch identifier {
        case Self.toolsItem:
            item.view = toolsView
            item.label = "Tools"
        case Self.styleItem:
            item.view = styleView
            item.label = "Style"
        default:
            return nil
        }
        return item
    }

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
