import AppKit

/// Programmatic main menu (no xib). Actions travel the responder chain.
enum MainMenu {
    static func make() -> NSMenu {
        let main = NSMenu()
        main.addItem(submenu(appMenu()))
        main.addItem(submenu(fileMenu()))
        main.addItem(submenu(editMenu()))
        main.addItem(submenu(viewMenu()))
        let window = windowMenu()
        main.addItem(submenu(window))
        NSApp.windowsMenu = window
        return main
    }

    private static func submenu(_ menu: NSMenu) -> NSMenuItem {
        let item = NSMenuItem(title: menu.title, action: nil, keyEquivalent: "")
        item.submenu = menu
        return item
    }

    private static func item(_ title: String, _ action: Selector?, _ key: String = "",
                             _ modifiers: NSEvent.ModifierFlags = .command) -> NSMenuItem {
        let item = NSMenuItem(title: title, action: action, keyEquivalent: key)
        item.keyEquivalentModifierMask = modifiers
        return item
    }

    /// Capture commands. No key equivalent here: the global hot key already handles the
    /// shortcut everywhere, and a menu key equivalent would fire it a second time.
    private static func captureItem(_ title: String, _ shortcut: GlobalHotKeys.Shortcut) -> NSMenuItem {
        let item = NSMenuItem(title: "\(title)  (\(shortcut.display))",
                              action: #selector(CaptureActions.run(_:)), keyEquivalent: "")
        item.target = CaptureActions.shared
        item.representedObject = title
        return item
    }

    private static func appMenu() -> NSMenu {
        let menu = NSMenu(title: "Annotate")
        menu.addItem(item("About Annotate", #selector(NSApplication.orderFrontStandardAboutPanel(_:))))
        menu.addItem(.separator())
        let services = NSMenu(title: "Services")
        NSApp.servicesMenu = services
        menu.addItem(submenu(services))
        menu.addItem(.separator())
        menu.addItem(item("Hide Annotate", #selector(NSApplication.hide(_:)), "h"))
        menu.addItem(item("Hide Others", #selector(NSApplication.hideOtherApplications(_:)), "h", [.command, .option]))
        menu.addItem(item("Show All", #selector(NSApplication.unhideAllApplications(_:))))
        menu.addItem(.separator())
        menu.addItem(item("Quit Annotate", #selector(NSApplication.terminate(_:)), "q"))
        return menu
    }

    private static func fileMenu() -> NSMenu {
        let menu = NSMenu(title: "File")
        menu.addItem(item("Open…", #selector(NSDocumentController.openDocument(_:)), "o"))
        menu.addItem(.separator())
        menu.addItem(captureItem("Capture Region", GlobalHotKeys.captureRegion))
        menu.addItem(captureItem("Capture Window", GlobalHotKeys.captureWindow))
        menu.addItem(captureItem("New from Clipboard", GlobalHotKeys.newFromClipboard))
        menu.addItem(.separator())
        let recent = NSMenu(title: "Open Recent")
        recent.addItem(item("Clear Menu", #selector(NSDocumentController.clearRecentDocuments(_:))))
        menu.addItem(submenu(recent))
        menu.addItem(.separator())
        menu.addItem(item("Close", #selector(NSWindow.performClose(_:)), "w"))
        menu.addItem(item("Save…", #selector(NSDocument.save(_:)), "s"))
        menu.addItem(item("Save As…", #selector(NSDocument.saveAs(_:)), "s", [.command, .shift]))
        return menu
    }

    private static func editMenu() -> NSMenu {
        let menu = NSMenu(title: "Edit")
        menu.addItem(item("Undo", Selector(("undo:")), "z"))
        menu.addItem(item("Redo", Selector(("redo:")), "z", [.command, .shift]))
        menu.addItem(.separator())
        menu.addItem(item("Cut", #selector(NSText.cut(_:)), "x"))
        menu.addItem(item("Copy", #selector(NSText.copy(_:)), "c"))
        menu.addItem(item("Paste", #selector(NSText.paste(_:)), "v"))
        menu.addItem(item("Copy Image & Close", #selector(Document.copyImageAndClose(_:)), "c", [.command, .shift]))
        menu.addItem(.separator())
        menu.addItem(item("Delete", #selector(CanvasViewController.delete(_:))))
        menu.addItem(item("Select All", #selector(CanvasViewController.selectAll(_:)), "a"))
        return menu
    }

    private static func viewMenu() -> NSMenu {
        let menu = NSMenu(title: "View")
        menu.addItem(item("Actual Size", #selector(CanvasViewController.zoomToActualSize(_:)), "0"))
        menu.addItem(item("Zoom In", #selector(CanvasViewController.zoomIn(_:)), "+"))
        menu.addItem(item("Zoom Out", #selector(CanvasViewController.zoomOut(_:)), "-"))
        return menu
    }

    private static func windowMenu() -> NSMenu {
        let menu = NSMenu(title: "Window")
        menu.addItem(item("Minimize", #selector(NSWindow.performMiniaturize(_:)), "m"))
        menu.addItem(item("Zoom", #selector(NSWindow.performZoom(_:))))
        menu.addItem(.separator())
        menu.addItem(item("Bring All to Front", #selector(NSApplication.arrangeInFront(_:))))
        return menu
    }
}

/// Target for the File menu capture items.
final class CaptureActions: NSObject {
    static let shared = CaptureActions()

    @objc func run(_ sender: NSMenuItem) {
        switch sender.representedObject as? String {
        case "Capture Region": ScreenCapture.capture(.region)
        case "Capture Window": ScreenCapture.capture(.window)
        case "New from Clipboard": ScreenCapture.newFromClipboard()
        default: break
        }
    }
}
