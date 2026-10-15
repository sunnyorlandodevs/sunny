import AppKit

@main
final class AppDelegate: NSObject, NSApplicationDelegate {
    static func main() {
        let app = NSApplication.shared
        let delegate = AppDelegate()
        app.delegate = delegate
        app.mainMenu = MainMenu.make()
        app.setActivationPolicy(.regular)
        app.run()
    }

    func applicationDidFinishLaunching(_ notification: Notification) {
        NSApp.activate()
        #if DEBUG
        SelfTest.runIfRequested()
        #endif
    }

    /// Launching with nothing to open shows a blank canvas, like File > New.
    func applicationShouldOpenUntitledFile(_ sender: NSApplication) -> Bool { true }
}
