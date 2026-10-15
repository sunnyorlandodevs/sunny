import AppKit
import ServiceManagement

/// The app's only permanent UI: a menu bar icon with the capture commands.
final class StatusMenu: NSObject, NSMenuDelegate {
    private let item = NSStatusBar.system.statusItem(withLength: NSStatusItem.squareLength)

    override init() {
        super.init()
        item.button?.image = NSImage(systemSymbolName: "camera.viewfinder",
                                     accessibilityDescription: "Annotate")
        item.button?.toolTip = "Annotate: capture and annotate screenshots"
        let menu = NSMenu()
        menu.addItem(entry("Capture Region", GlobalHotKeys.captureRegion, #selector(captureRegion)))
        menu.addItem(entry("Capture Window", GlobalHotKeys.captureWindow, #selector(captureWindow)))
        menu.addItem(entry("New from Clipboard", GlobalHotKeys.newFromClipboard, #selector(newFromClipboard)))
        menu.addItem(.separator())
        menu.addItem(withTitle: "Open…", action: #selector(openDocument), keyEquivalent: "").target = self
        menu.addItem(.separator())
        loginItem.target = self
        menu.addItem(loginItem)
        menu.addItem(withTitle: "Quit Annotate", action: #selector(NSApplication.terminate(_:)), keyEquivalent: "")
        menu.delegate = self
        item.menu = menu
    }

    private let loginItem = NSMenuItem(title: "Open at Login", action: #selector(toggleOpenAtLogin), keyEquivalent: "")

    func menuWillOpen(_ menu: NSMenu) {
        loginItem.state = SMAppService.mainApp.status == .enabled ? .on : .off
    }

    @objc private func toggleOpenAtLogin() {
        do {
            if SMAppService.mainApp.status == .enabled {
                try SMAppService.mainApp.unregister()
            } else {
                try SMAppService.mainApp.register()
            }
        } catch {
            NSApp.activate()
            NSApp.presentError(error)
        }
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
