import AppKit
import Carbon.HIToolbox

/// System-wide shortcuts via Carbon's `RegisterEventHotKey` (replaces the original's
/// MASShortcut). Works while another app is frontmost and needs no Accessibility access.
enum GlobalHotKeys {
    struct Shortcut {
        let keyCode: Int
        let modifiers: Int  // Carbon modifier flags (cmdKey, shiftKey, …)
        let display: String
        let action: () -> Void
    }

    /// Defaults match the original (`AppDelegate registerDefaults`: ⌘⇧ + 5/6/7/8).
    /// macOS also uses ⌘⇧5 for its screenshot toolbar; turn that off in System Settings ›
    /// Keyboard › Keyboard Shortcuts › Screenshots or the system keeps the key.
    static let shortcuts: [Shortcut] = [
        Shortcut(keyCode: kVK_ANSI_5, modifiers: cmdKey | shiftKey, display: "⇧⌘5") { ScreenCapture.capture(.region) },
        Shortcut(keyCode: kVK_ANSI_6, modifiers: cmdKey | shiftKey, display: "⇧⌘6") { ScreenCapture.capture(.window) },
        Shortcut(keyCode: kVK_ANSI_7, modifiers: cmdKey | shiftKey, display: "⇧⌘7") { ScreenCapture.newFromClipboard() },
        Shortcut(keyCode: kVK_ANSI_8, modifiers: cmdKey | shiftKey, display: "⇧⌘8") { showAllWindows() },
    ]

    static let captureRegion = shortcuts[0]
    static let captureWindow = shortcuts[1]
    static let newFromClipboard = shortcuts[2]
    static let bringToFront = shortcuts[3]

    private static let signature: OSType = 0x414E_4E54  // 'ANNT'
    private static var refs: [EventHotKeyRef] = []
    static var registeredCount: Int { refs.count }

    /// Registers every shortcut. Returns the ones the system refused (already taken).
    @discardableResult
    static func register() -> [Shortcut] {
        var spec = EventTypeSpec(eventClass: OSType(kEventClassKeyboard), eventKind: UInt32(kEventHotKeyPressed))
        InstallEventHandler(GetApplicationEventTarget(), { _, event, _ in
            var id = EventHotKeyID()
            GetEventParameter(event, EventParamName(kEventParamDirectObject), EventParamType(typeEventHotKeyID),
                              nil, MemoryLayout<EventHotKeyID>.size, nil, &id)
            // Carbon delivers hot key events on the main thread.
            MainActor.assumeIsolated {
                let index = Int(id.id)
                if GlobalHotKeys.shortcuts.indices.contains(index) {
                    GlobalHotKeys.shortcuts[index].action()
                }
            }
            return noErr
        }, 1, &spec, nil, nil)

        var failed: [Shortcut] = []
        for (index, shortcut) in shortcuts.enumerated() {
            var ref: EventHotKeyRef?
            let status = RegisterEventHotKey(UInt32(shortcut.keyCode), UInt32(shortcut.modifiers),
                                             EventHotKeyID(signature: signature, id: UInt32(index)),
                                             GetApplicationEventTarget(), 0, &ref)
            if status == noErr, let ref { refs.append(ref) } else { failed.append(shortcut) }
        }
        return failed
    }

    static func showAllWindows() {
        NSApp.activate()
        for document in NSDocumentController.shared.documents {
            document.showWindows()
        }
    }
}
