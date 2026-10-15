import AppKit

@main
final class AppDelegate: NSObject, NSApplicationDelegate {
    private var statusMenu: StatusMenu?

    static func main() {
        let app = NSApplication.shared
        let delegate = AppDelegate()
        app.delegate = delegate
        app.mainMenu = MainMenu.make()
        // Menu bar app: no Dock icon; windows appear only for captures.
        app.setActivationPolicy(.accessory)
        app.run()
    }

    func applicationDidFinishLaunching(_ notification: Notification) {
        statusMenu = StatusMenu()
        let refused = GlobalHotKeys.register()
        if !refused.isEmpty {
            NSLog("Annotate: shortcuts already taken by another app: %@",
                  refused.map(\.display).joined(separator: ", "))
        }
        #if DEBUG
        SelfTest.runIfRequested()
        #endif
    }

    /// Launching just puts the icon in the menu bar; nothing opens until a capture.
    func applicationShouldOpenUntitledFile(_ sender: NSApplication) -> Bool { false }
}
