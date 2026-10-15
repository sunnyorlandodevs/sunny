import AppKit
import ServiceManagement

/// The app's only permanent UI: a menu bar icon with the capture commands.
final class StatusMenu: NSObject, NSMenuDelegate {
    private let item = NSStatusBar.system.statusItem(withLength: NSStatusItem.squareLength)

    override init() {
        super.init()
        item.button?.image = Self.menuBarIcon
        item.button?.toolTip = "Sunny: capture and annotate screenshots"
        let menu = NSMenu()
        menu.addItem(entry("Capture Region", GlobalHotKeys.captureRegion, #selector(captureRegion)))
        menu.addItem(entry("Capture Window", GlobalHotKeys.captureWindow, #selector(captureWindow)))
        menu.addItem(entry("New from Clipboard", GlobalHotKeys.newFromClipboard, #selector(newFromClipboard)))
        menu.addItem(.separator())
        menu.addItem(withTitle: "Open…", action: #selector(openDocument), keyEquivalent: "").target = self
        menu.addItem(.separator())
        loginItem.target = self
        menu.addItem(loginItem)
        menu.addItem(withTitle: "Quit Sunny", action: #selector(NSApplication.terminate(_:)), keyEquivalent: "")
        menu.delegate = self
        item.menu = menu
    }

    /// The app icon reduced to a template: viewfinder brackets around a small sun.
    private static let menuBarIcon: NSImage = {
        let image = NSImage(size: NSSize(width: 18, height: 18), flipped: false) { rect in
            NSColor.black.set()
            let brackets = NSBezierPath()
            brackets.lineWidth = 1.6
            brackets.lineCapStyle = .round
            brackets.lineJoinStyle = .round
            let box = rect.insetBy(dx: 1.5, dy: 1.5), arm: CGFloat = 4.5
            for (corner, dx, dy) in [(CGPoint(x: box.minX, y: box.maxY), 1.0, -1.0), (CGPoint(x: box.maxX, y: box.maxY), -1.0, -1.0),
                                     (CGPoint(x: box.maxX, y: box.minY), -1.0, 1.0), (CGPoint(x: box.minX, y: box.minY), 1.0, 1.0)] {
                brackets.move(to: CGPoint(x: corner.x, y: corner.y + dy * arm))
                brackets.line(to: corner)
                brackets.line(to: CGPoint(x: corner.x + dx * arm, y: corner.y))
            }
            brackets.stroke()
            let center = CGPoint(x: rect.midX, y: rect.midY)
            NSBezierPath(ovalIn: CGRect(x: center.x - 2.6, y: center.y - 2.6, width: 5.2, height: 5.2)).fill()
            let rays = NSBezierPath()
            rays.lineWidth = 1.3
            rays.lineCapStyle = .round
            for i in 0..<8 {
                let angle = CGFloat(i) * .pi / 4
                rays.move(to: CGPoint(x: center.x + cos(angle) * 4, y: center.y + sin(angle) * 4))
                rays.line(to: CGPoint(x: center.x + cos(angle) * 5.4, y: center.y + sin(angle) * 5.4))
            }
            rays.stroke()
            return true
        }
        image.isTemplate = true
        image.accessibilityDescription = "Sunny"
        return image
    }()

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
