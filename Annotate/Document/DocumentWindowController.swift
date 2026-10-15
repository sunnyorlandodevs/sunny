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

        // Fit the window to the image, within the visible screen area.
        let visible = NSScreen.main?.visibleFrame.size ?? CGSize(width: 1440, height: 900)
        let contentSize = CGSize(width: min(max(document.canvasSize.width + 40, 720), visible.width * 0.9),
                                 height: min(document.canvasSize.height + 90, visible.height * 0.9))
        let window = NSWindow(contentRect: CGRect(origin: .zero, size: contentSize),
                              styleMask: [.titled, .closable, .miniaturizable, .resizable],
                              backing: .buffered, defer: false)
        window.contentMinSize = CGSize(width: 640, height: 360)
        window.contentView = container
        window.center()

        super.init(window: window)
        window.makeFirstResponder(canvasController.canvasView)
    }

    @available(*, unavailable)
    required init?(coder: NSCoder) { fatalError("init(coder:) is not supported") }
}
