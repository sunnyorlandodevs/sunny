#if DEBUG
import AppKit

/// Scripted end-to-end check of the rectangle tool, run with:
///   Annotate.app/Contents/MacOS/Annotate -AnnotateSelfTestImage <image> -AnnotateSelfTestOut <dir>
/// (`-key value` pairs, so AppKit reads them as defaults instead of files to open.)
/// Drives the same CanvasViewController mouse entry points the real events use,
/// then checks geometry, undo/redo, save round-trip, and PNG export.
enum SelfTest {
    static func runIfRequested() {
        let defaults = UserDefaults.standard
        guard let imagePath = defaults.string(forKey: "AnnotateSelfTestImage"),
              let outPath = defaults.string(forKey: "AnnotateSelfTestOut") else { return }
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
                let hold = defaults.double(forKey: "AnnotateSelfTestHold")
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

        // Save / reopen round trip.
        do {
            let data = try doc.data(ofType: Document.nativeType)
            let reopened = Document()
            try reopened.read(from: data, ofType: Document.nativeType)
            check(reopened.graphics.map(\.record) == doc.graphics.map(\.record), "save/reopen round-trips graphics")
            check(reopened.image != nil, "save/reopen keeps image")
            try data.write(to: outDir.appendingPathComponent("roundtrip.annot"))
        } catch {
            check(false, "save round trip threw \(error)")
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
        snapshot(canvas.canvasView, to: outDir.appendingPathComponent("3-final-canvas.png"))
        snapshot(wc.window!.contentView!, to: outDir.appendingPathComponent("4-window.png"))
        return failures
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
