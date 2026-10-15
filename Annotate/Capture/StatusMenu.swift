import AppKit

/// Menu bar icon with the capture commands, so capturing works with no window open.
final class StatusMenu: NSObject {
    private let item = NSStatusBar.system.statusItem(withLength: NSStatusItem.squareLength)

    override init() {
        super.init()
        item.button?.image = NSImage(systemSymbolName: "pencil.and.scribble",
                                     accessibilityDescription: "Annotate")
        let menu = NSMenu()
        menu.addItem(entry("Capture Region", GlobalHotKeys.captureRegion, #selector(captureRegion)))
        menu.addItem(entry("Capture Window", GlobalHotKeys.captureWindow, #selector(captureWindow)))
        menu.addItem(entry("New from Clipboard", GlobalHotKeys.newFromClipboard, #selector(newFromClipboard)))
        menu.addItem(.separator())
        menu.addItem(withTitle: "Open…", action: #selector(openDocument), keyEquivalent: "").target = self
        menu.addItem(.separator())
        menu.addItem(withTitle: "Quit Annotate", action: #selector(NSApplication.terminate(_:)), keyEquivalent: "")
        item.menu = menu
    }

    /// Shows the global shortcut on the right, display-only (the hot key does the work).
    private func entry(_ title: String, _ shortcut: GlobalHotKeys.Shortcut, _ action: Selector) -> NSMenuItem {
        let menuItem = NSMenuItem(title: title, action: action, keyEquivalent: "")
        menuItem.target = self
        let attributed = NSMutableAttributedString(string: title + "\t")
        attributed.append(NSAttributedString(string: shortcut.display,
                                              attributes: [.foregroundColor: NSColor.secondaryLabelColor]))
        let tab = NSTextTab(textAlignment: .right, location: 200)
        let paragraph = NSMutableParagraphStyle()
        paragraph.tabStops = [tab]
        attributed.addAttribute(.paragraphStyle, value: paragraph,
                                range: NSRange(location: 0, length: attributed.length))
        attributed.addAttribute(.font, value: NSFont.menuFont(ofSize: 0),
                                range: NSRange(location: 0, length: attributed.length))
        menuItem.attributedTitle = attributed
        return menuItem
    }

    @objc private func captureRegion() { ScreenCapture.capture(.region) }
    @objc private func captureWindow() { ScreenCapture.capture(.window) }
    @objc private func newFromClipboard() { ScreenCapture.newFromClipboard() }
    @objc private func openDocument() {
        NSApp.activate()
        NSDocumentController.shared.openDocument(nil)
    }
}
