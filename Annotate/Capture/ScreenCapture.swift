import AppKit

/// Screenshot → new document, the way the original did it (`AppDelegate snapshotType:`):
/// run `/usr/sbin/screencapture -o -i [-W] <file>`, wait, then open the file if the user
/// didn't cancel. `-o` drops the window shadow, `-i` is interactive, `-W` starts in
/// window-picking mode.
enum ScreenCapture {
    enum Kind {
        case region, window

        var arguments: [String] {
            switch self {
            case .region: ["-o", "-i"]
            case .window: ["-o", "-i", "-W"]
            }
        }
    }

    private static var isCapturing = false

    static func capture(_ kind: Kind) {
        // A second hotkey press while the crosshair is up would stack another capture.
        guard !isCapturing else { return }
        isCapturing = true

        let url = newCaptureURL()
        let process = Process()
        process.executableURL = URL(fileURLWithPath: "/usr/sbin/screencapture")
        process.arguments = kind.arguments + [url.path]
        process.terminationHandler = { _ in
            DispatchQueue.main.async {
                isCapturing = false
                // Esc during the capture exits without writing a file.
                guard FileManager.default.fileExists(atPath: url.path) else { return }
                openCapture(at: url)
            }
        }
        do {
            try process.run()
        } catch {
            isCapturing = false
            NSApp.presentError(error)
        }
    }

    static func openCapture(at url: URL) {
        NSApp.activate()
        NSDocumentController.shared.openDocument(withContentsOf: url, display: true) { _, _, error in
            if let error { NSApp.presentError(error) }
        }
    }

    /// New document from whatever image is on the clipboard (original: ⌘⇧7).
    static func newFromClipboard() {
        guard let image = NSImage(pasteboard: .general) else {
            NSSound.beep()
            return
        }
        NSApp.activate()
        Document.openUntitled(with: image, name: "Clipboard \(timestamp())")
    }

    /// `~/Library/Caches/<bundle id>/Captures/Screenshot <date>.png`. Captures only live
    /// here until the user saves an `.annot` or exports a PNG.
    private static func newCaptureURL() -> URL {
        let caches = FileManager.default.urls(for: .cachesDirectory, in: .userDomainMask)[0]
        let folder = caches
            .appendingPathComponent(Bundle.main.bundleIdentifier ?? "Annotate")
            .appendingPathComponent("Captures")
        try? FileManager.default.createDirectory(at: folder, withIntermediateDirectories: true)
        return folder.appendingPathComponent("Screenshot \(timestamp()).png")
    }

    private static func timestamp() -> String {
        let formatter = DateFormatter()
        formatter.dateFormat = "yyyy-MM-dd 'at' h.mm.ss a"
        return formatter.string(from: Date())
    }
}
