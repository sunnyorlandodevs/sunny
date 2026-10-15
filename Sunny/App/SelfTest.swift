#if DEBUG
import AppKit

/// Scripted end-to-end check of the rectangle tool, run with:
///   Sunny.app/Contents/MacOS/Sunny -SunnySelfTestImage <image> -SunnySelfTestOut <dir>
/// (`-key value` pairs, so AppKit reads them as defaults instead of files to open.)
/// Drives the same CanvasViewController mouse entry points the real events use,
/// then checks geometry, undo/redo, save round-trip, and PNG export.
enum SelfTest {
    static func runIfRequested() {
        let defaults = UserDefaults.standard
        guard let imagePath = defaults.string(forKey: "SunnySelfTestImage"),
              let outPath = defaults.string(forKey: "SunnySelfTestOut") else { return }
        setvbuf(stdout, nil, _IONBF, 0)
        let imageURL = URL(fileURLWithPath: imagePath)
        let outDir = URL(fileURLWithPath: outPath)
        FileHandle.standardError.write("selftest: opening \(imageURL.path)\n".data(using: .utf8)!)

        NSDocumentController.shared.openDocument(withContentsOf: imageURL, display: true) { doc, _, error in
            FileHandle.standardError.write("selftest: opened \(String(describing: doc)) \(String(describing: error))\n".data(using: .utf8)!)
            guard let doc = doc as? Document else {
                finish(["open failed: \(String(describing: error))"])
                return
            }
            // Give the window a moment to lay out before snapshotting.
            DispatchQueue.main.asyncAfter(deadline: .now() + 0.5) {
                let failures = run(doc, outDir: outDir)
                // Optional pause so an external `screencapture -l <window>` can grab the real window.
                let hold = defaults.double(forKey: "SunnySelfTestHold")
                if let window = doc.windowControllers.first?.window { print("WINDOW \(window.windowNumber)") }
                DispatchQueue.main.asyncAfter(deadline: .now() + hold) { finish(failures) }
            }
        }
    }

    private static func run(_ doc: Document, outDir: URL) -> [String] {
        var failures: [String] = []
        func check(_ ok: Bool, _ message: String) {
            print(ok ? "PASS  \(message)" : "FAIL  \(message)")
            if !ok { failures.append(message) }
        }
        guard let wc = doc.windowControllers.first as? DocumentWindowController,
              let undo = doc.undoManager else { return ["no window controller"] }
        let canvas = wc.canvasController
        // Take over grouping (no real events here), closing any group the run loop opened.
        while undo.groupingLevel > 0 { undo.endUndoGrouping() }
        undo.groupsByEvent = false
        func step(_ body: () -> Void) {
            undo.beginUndoGrouping(); body(); undo.endUndoGrouping()
        }
        func rect(_ g: Graphic) -> CGRect { (g as! Shape).rect }

        // Settings persist to the real defaults; put the user's back when done.
        let saved = (wc.settings.tool, wc.settings.color, wc.settings.size, wc.settings.hasShadow)
        defer {
            canvas.selection = []
            (wc.settings.tool, wc.settings.color, wc.settings.size, wc.settings.hasShadow) = saved
        }
        wc.settings.size = 1
        wc.settings.color = Graphic.defaultColor
        wc.settings.hasShadow = true
        wc.settings.tool = .shapeRectangle

        // Draw a rectangle.
        step {
            canvas.mouseDown(at: CGPoint(x: 100, y: 100), extendingSelection: false)
            canvas.mouseDragged(to: CGPoint(x: 160, y: 140))
            canvas.mouseDragged(to: CGPoint(x: 300, y: 250))
            canvas.mouseUp(at: CGPoint(x: 300, y: 250))
        }
        check(doc.graphics.count == 1, "drag creates one rectangle")
        guard let g = doc.graphics.first else { return failures }
        check(g is ShapeRectangle, "graphic is ShapeRectangle")
        check(rect(g) == CGRect(x: 100, y: 100, width: 200, height: 150), "rect = \(rect(g))")
        check(CodableColor(g.color) == CodableColor(Graphic.defaultColor), "uses current color (default yellow)")
        check(canvas.selection.count == 1 && canvas.selection[0] === g, "new rectangle is selected")
        try? doc.renderedPNG()?.write(to: outDir.appendingPathComponent("1-created.png"))
        snapshot(canvas.canvasView, to: outDir.appendingPathComponent("1-created-with-handles.png"))

        // Resize from the bottom-right handle.
        step {
            canvas.mouseDown(at: CGPoint(x: 301, y: 249), extendingSelection: false)
            canvas.mouseDragged(to: CGPoint(x: 351, y: 299))
            canvas.mouseUp(at: CGPoint(x: 351, y: 299))
        }
        check(rect(g) == CGRect(x: 100, y: 100, width: 250, height: 200), "BR handle resize → \(rect(g))")

        // Drag the top-right handle past the left edge: the shape flips instead of going negative.
        step {
            canvas.mouseDown(at: CGPoint(x: 350, y: 100), extendingSelection: false)
            canvas.mouseDragged(to: CGPoint(x: 40, y: 100))
            canvas.mouseDragged(to: CGPoint(x: 20, y: 100))
            canvas.mouseUp(at: CGPoint(x: 20, y: 100))
        }
        check(rect(g) == CGRect(x: 20, y: 100, width: 80, height: 200), "handle drag past edge flips → \(rect(g))")

        // Move by grabbing the stroke.
        step {
            canvas.mouseDown(at: CGPoint(x: 20, y: 200), extendingSelection: false)
            canvas.mouseDragged(to: CGPoint(x: 30, y: 210))
            canvas.mouseUp(at: CGPoint(x: 30, y: 210))
        }
        check(rect(g) == CGRect(x: 30, y: 110, width: 80, height: 200), "move via stroke → \(rect(g))")

        // A click (no drag) on empty canvas deselects and doesn't create anything.
        // (No undo group: nothing is registered, and an empty group would shadow "Move".)
        canvas.mouseDown(at: CGPoint(x: 500, y: 400), extendingSelection: false)
        canvas.mouseUp(at: CGPoint(x: 500, y: 400))
        check(doc.graphics.count == 1, "click without drag creates nothing")
        check(canvas.selection.isEmpty, "click on empty canvas deselects")

        // Hollow middle isn't a hit (matches original hit-testing).
        check(!g.isContentsUnderPoint(CGPoint(x: 70, y: 210)), "inside of hollow rect is not a hit")

        // Undo walks back each step.
        check(undo.undoActionName == "Move", "undo menu says '\(undo.undoActionName)'")
        undo.undo()
        check(rect(g) == CGRect(x: 20, y: 100, width: 80, height: 200), "undo move")
        undo.undo()
        check(rect(g) == CGRect(x: 100, y: 100, width: 250, height: 200), "undo flip-resize")
        undo.undo()
        check(rect(g) == CGRect(x: 100, y: 100, width: 200, height: 150), "undo resize")
        undo.undo()
        check(doc.graphics.isEmpty, "undo add removes rectangle")
        undo.redo()
        check(doc.graphics.count == 1, "redo add")
        undo.redo()
        check(rect(g) == CGRect(x: 100, y: 100, width: 250, height: 200), "redo resize")

        // Style change on selection is undoable.
        canvas.selection = [g]
        step { wc.settings.color = .systemBlue }
        check(CodableColor(g.color) == CodableColor(.systemBlue), "color change applies to selection")
        undo.undo()
        check(CodableColor(g.color) == CodableColor(Graphic.defaultColor), "undo color change")
        step { wc.settings.size = 2 }
        check(g.strokeWidth == 8, "size L → 8pt stroke")

        // Save writes a flattened PNG at full pixel size.
        do {
            let data = try doc.data(ofType: Document.pngTypeID)
            let rep = NSBitmapImageRep(data: data)
            check(rep != nil && data.starts(with: [0x89, 0x50, 0x4E, 0x47]), "Save writes PNG data")
            check(rep?.pixelsWide == doc.image?.representations.map(\.pixelsWide).max(), "saved PNG is full pixel size")
        } catch {
            check(false, "save threw \(error)")
        }

        // Export PNG and sample a stroke pixel.
        if let png = doc.renderedPNG(), let rep = NSBitmapImageRep(data: png) {
            try? png.write(to: outDir.appendingPathComponent("2-export.png"))
            let scale = CGFloat(rep.pixelsWide) / doc.canvasSize.width
            let c = rep.colorAt(x: Int(100 * scale), y: Int(200 * scale))?.usingColorSpace(.sRGB)
            check(c.map { $0.redComponent > 0.9 && $0.greenComponent > 0.8 && $0.blueComponent < 0.2 } ?? false,
                  "export has yellow stroke at left edge (\(rep.pixelsWide)x\(rep.pixelsHigh), got \(String(describing: c)))")
        } else {
            check(false, "export PNG")
        }
        // Capture plumbing: hot keys registered, a finished capture file and a
        // clipboard image each become a new untitled document.
        check(GlobalHotKeys.registeredCount == GlobalHotKeys.shortcuts.count,
              "global shortcuts registered (\(GlobalHotKeys.registeredCount)/\(GlobalHotKeys.shortcuts.count))")
        let before = NSDocumentController.shared.documents.count
        let capture = outDir.appendingPathComponent("Screenshot test.png")
        try? FileManager.default.removeItem(at: capture)
        if let png = doc.renderedPNG() { try? png.write(to: capture) }
        ScreenCapture.openCapture(at: capture)
        Document.openUntitled(with: doc.image!, name: "Clipboard test")
        let docs = NSDocumentController.shared.documents.compactMap { $0 as? Document }
        check(docs.count == before + 1 || docs.count == before + 2, "capture/clipboard open new documents (\(docs.count - before) so far)")
        if let clip = docs.first(where: { $0.displayName == "Clipboard test" }) {
            check(clip.fileURL == nil && clip.image != nil && !clip.windowControllers.isEmpty,
                  "clipboard image opens as untitled doc with a window")
        } else {
            check(false, "clipboard document exists")
        }
        runMVPTools(doc, wc, step: step, check: check)
        runSpotlight(doc, wc, step: step, check: check)
        runCopyAndClose(doc, check: check)
        canvas.selection = []
        snapshot(canvas.canvasView, to: outDir.appendingPathComponent("3-final-canvas.png"))
        snapshot(wc.window!.contentView!, to: outDir.appendingPathComponent("4-window.png"))
        return failures
    }

    /// Arrow, ellipse and text, driven through the same controller entry points.
    private static func runMVPTools(_ doc: Document, _ wc: DocumentWindowController,
                                    step: (() -> Void) -> Void, check: (Bool, String) -> Void) {
        let canvas = wc.canvasController
        let undo = doc.undoManager!

        // Arrow: tip where the drag starts, tail where it ends.
        wc.settings.tool = .arrowNormal
        let countBefore = doc.graphics.count
        step {
            canvas.mouseDown(at: CGPoint(x: 600, y: 120), extendingSelection: false)
            canvas.mouseDragged(to: CGPoint(x: 700, y: 220))
            canvas.mouseUp(at: CGPoint(x: 700, y: 220))
        }
        let arrow = doc.graphics.last as? ArrowNormal
        check(arrow != nil && doc.graphics.count == countBefore + 1, "drag creates an arrow")
        if let arrow {
            check(arrow.tip == CGPoint(x: 600, y: 120) && arrow.tail == CGPoint(x: 700, y: 220),
                  "arrow tip at drag start, tail at drag end")
            check(arrow.isContentsUnderPoint(CGPoint(x: 650, y: 170)), "arrow shaft is clickable")
            check(arrow.isContentsUnderPoint(CGPoint(x: 605, y: 127)), "arrow head is clickable")
        }
        // Tiny drag → discarded.
        step {
            canvas.mouseDown(at: CGPoint(x: 800, y: 500), extendingSelection: false)
            canvas.mouseDragged(to: CGPoint(x: 803, y: 503))
            canvas.mouseUp(at: CGPoint(x: 803, y: 503))
        }
        check(doc.graphics.count == countBefore + 1, "arrow shorter than 7pt is discarded")

        // Ellipse.
        wc.settings.tool = .shapeCircle
        step {
            canvas.mouseDown(at: CGPoint(x: 450, y: 350), extendingSelection: false)
            canvas.mouseDragged(to: CGPoint(x: 600, y: 450))
            canvas.mouseUp(at: CGPoint(x: 600, y: 450))
        }
        let ellipse = doc.graphics.first { $0 is ShapeCircle } as? ShapeCircle
        check(ellipse?.rect == CGRect(x: 450, y: 350, width: 150, height: 100), "drag creates an ellipse")
        check(ellipse.map { $0.isContentsUnderPoint(CGPoint(x: 450, y: 400)) && !$0.isContentsUnderPoint(CGPoint(x: 525, y: 400)) } ?? false,
              "ellipse hit-tests on its outline only")

        // Text: click, type, finish.
        wc.settings.tool = .text
        canvas.mouseDown(at: CGPoint(x: 120, y: 420), extendingSelection: false)
        canvas.mouseUp(at: CGPoint(x: 120, y: 420))
        let textView = wc.window?.firstResponder as? NSTextView
        check(textView != nil && canvas.editingText != nil, "text tool click starts typing")
        textView?.insertText("Hello there", replacementRange: NSRange(location: NSNotFound, length: 0))
        check(canvas.editingText?.string == "Hello there", "typed text reaches the text box")
        step { canvas.endEditing() }
        let box = doc.graphics.first { $0 is TextBox } as? TextBox
        check(box?.string == "Hello there", "finished text box is added to the document")
        check(undo.undoActionName == "Add Text", "undo menu says '\(undo.undoActionName)'")
        if let box {
            check(box.bounds.width > 100 && box.bounds.height > 25, "text box sizes to content (\(box.bounds))")
            undo.undo()
            check(!doc.graphics.contains { $0 === box }, "undo removes the text box")
            undo.redo()
            check(doc.graphics.contains { $0 === box }, "redo restores it")

            // Double-click to edit; typing replaces the selected-all text.
            let center = CGPoint(x: box.bounds.midX, y: box.bounds.midY)
            canvas.mouseDown(at: center, extendingSelection: false, clickCount: 1)
            canvas.mouseUp(at: center)
            canvas.mouseDown(at: center, extendingSelection: false, clickCount: 2)
            (wc.window?.firstResponder as? NSTextView)?.insertText("Edited", replacementRange: NSRange(location: NSNotFound, length: 0))
            step { canvas.endEditing() }
            check(box.string == "Edited", "double-click edits the text")
            undo.undo()
            check(box.string == "Hello there", "undo reverts the edit")

            // Color change restyles a selected text box.
            canvas.selection = [box]
            step { wc.settings.color = .systemRed }
            check(CodableColor(box.color) == CodableColor(.systemRed), "color change applies to text")
        }

        // Empty text box is dropped.
        let count = doc.graphics.count
        canvas.mouseDown(at: CGPoint(x: 700, y: 520), extendingSelection: false)
        canvas.mouseUp(at: CGPoint(x: 700, y: 520))
        step { canvas.endEditing() }
        check(doc.graphics.count == count, "empty text box is discarded")
    }

    /// ⇧⌘C on a second document: clipboard gets the PNG, a toast shows, the window
    /// stays open; then closing it never prompts. The user's clipboard is put back.
    private static func runCopyAndClose(_ doc: Document, check: (Bool, String) -> Void) {
        let pasteboard = NSPasteboard.general
        let savedItems = (pasteboard.pasteboardItems ?? []).map { item -> NSPasteboardItem in
            let copy = NSPasteboardItem()
            for type in item.types { if let data = item.data(forType: type) { copy.setData(data, forType: type) } }
            return copy
        }
        defer {
            pasteboard.clearContents()
            pasteboard.writeObjects(savedItems)
        }

        Document.openUntitled(with: doc.image!, name: "Copy test")
        guard let other = NSDocumentController.shared.documents
            .first(where: { $0.displayName == "Copy test" }) as? Document,
              let window = other.windowControllers.first?.window else {
            check(false, "copy: document opened")
            return
        }
        other.updateChangeCount(.changeDone)
        other.copyImage(nil)
        let png = pasteboard.data(forType: .png)
        check(png.flatMap(NSBitmapImageRep.init(data:))?.pixelsWide == NSBitmapImageRep(data: doc.renderedPNG()!)?.pixelsWide,
              "⇧⌘C puts a full-size PNG on the clipboard")
        check(NSDocumentController.shared.documents.contains { $0 === other }, "⇧⌘C leaves the window open")
        check(window.contentView?.subviews.contains { $0 is NSVisualEffectView } ?? false, "⇧⌘C shows the toast")

        check(!other.isDocumentEdited, "edited document still reports no unsaved changes")
        window.performClose(nil)
        check(!NSDocumentController.shared.documents.contains { $0 === other } && !window.isVisible,
              "closing an edited window doesn't prompt")
    }

    /// Spotlight: outside darkened by ~33%, inside untouched.
    private static func runSpotlight(_ doc: Document, _ wc: DocumentWindowController,
                                     step: (() -> Void) -> Void, check: (Bool, String) -> Void) {
        let canvas = wc.canvasController
        func pixel(_ png: Data, _ p: CGPoint) -> CGFloat {
            let rep = NSBitmapImageRep(data: png)!
            let scale = CGFloat(rep.pixelsWide) / doc.canvasSize.width
            let c = rep.colorAt(x: Int(p.x * scale), y: Int(p.y * scale))!.usingColorSpace(.sRGB)!
            return (c.redComponent + c.greenComponent + c.blueComponent) / 3
        }
        let outside = CGPoint(x: 860, y: 40), inside = CGPoint(x: 800, y: 120)
        let before = doc.renderedPNG()!
        wc.settings.tool = .overlayRectangle
        step {
            canvas.mouseDown(at: CGPoint(x: 760, y: 80), extendingSelection: false)
            canvas.mouseDragged(to: CGPoint(x: 880, y: 170))
            canvas.mouseUp(at: CGPoint(x: 880, y: 170))
        }
        check(doc.graphics.contains { $0 is OverlayRectangle }, "drag creates a spotlight")
        let after = doc.renderedPNG()!
        let ratio = pixel(after, outside) / pixel(before, outside)
        // 33% black over the image; color-space conversion moves the measured ratio a bit.
        check(ratio > 0.6 && ratio < 0.8, "outside the spotlight is darkened (ratio \(ratio))")
        check(abs(pixel(after, inside) - pixel(before, inside)) < 0.01, "inside the spotlight is untouched")
        check(doc.graphics.firstIndex { $0 is OverlayRectangle }! < doc.graphics.firstIndex { $0 is ArrowNormal }!,
              "spotlight sits below arrows/shapes/text")
    }

    private static func snapshot(_ view: NSView, to url: URL) {
        guard let rep = view.bitmapImageRepForCachingDisplay(in: view.bounds) else { return }
        view.cacheDisplay(in: view.bounds, to: rep)
        try? rep.representation(using: .png, properties: [:])?.write(to: url)
    }

    private static func finish(_ failures: [String]) {
        print(failures.isEmpty ? "SELFTEST OK" : "SELFTEST FAILED: \(failures.count)")
        fflush(stdout)
        exit(failures.isEmpty ? 0 : 1)
    }
}
#endif
