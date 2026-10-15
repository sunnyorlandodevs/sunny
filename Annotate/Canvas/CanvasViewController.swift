import AppKit

/// Owns tool state, selection, and the mouse state machine (`CanvasViewController`
/// in the original). The document owns the graphics; this decides what a click means.
///
/// The palette has no selection arrow — like the original, clicking an existing
/// graphic selects/moves it, and dragging empty canvas draws with the current tool.
final class CanvasViewController: NSViewController {
    private(set) weak var document: Document?
    let settings: CanvasSettings

    let canvasView = CanvasView()
    private let scrollView = NSScrollView()

    var selection: [Graphic] = [] {
        didSet { canvasView.needsDisplay = true }
    }

    /// The graphic being dragged out with the current tool, not yet in the document.
    private(set) var creatingGraphic: Graphic?

    private enum Drag {
        case none
        case creating(Graphic, handle: Int)
        case resizing(Graphic, handle: Int, before: Graphic.Record)
        case moving([(Graphic, Graphic.Record)])
    }

    private var drag = Drag.none
    private var lastPoint = CGPoint.zero

    /// Inline text editing: a transparent NSTextView over the TextBox graphic, which keeps
    /// rendering itself live underneath so what you type looks like the final result.
    private struct Editing {
        let text: TextBox
        let textView: NSTextView
        /// nil for a brand-new text box that isn't in the document yet.
        let before: Graphic.Record?
    }
    private var editing: Editing?
    var editingText: TextBox? { editing?.text }

    init(document: Document, settings: CanvasSettings) {
        self.document = document
        self.settings = settings
        super.init(nibName: nil, bundle: nil)
    }

    @available(*, unavailable)
    required init?(coder: NSCoder) { fatalError("init(coder:) is not supported") }

    override func loadView() {
        scrollView.contentView = CenteringClipView()
        scrollView.hasVerticalScroller = true
        scrollView.hasHorizontalScroller = true
        scrollView.autohidesScrollers = true
        scrollView.allowsMagnification = true
        scrollView.minMagnification = 0.1
        scrollView.maxMagnification = 8
        scrollView.backgroundColor = .underPageBackgroundColor
        scrollView.drawsBackground = true

        canvasView.controller = self
        canvasView.frame = CGRect(origin: .zero, size: document?.canvasSize ?? .zero)
        scrollView.documentView = canvasView
        view = scrollView

        document?.onChange = { [weak self] in self?.documentDidChange() }
        document?.commitPendingEdits = { [weak self] in self?.endEditing() }
        settings.onStyleChange = { [weak self] style in self?.applyStyleToSelection(style) }
    }

    private func documentDidChange() {
        guard let document else { return }
        // Undo can remove graphics out from under the selection.
        let remaining = selection.filter { graphic in document.graphics.contains { $0 === graphic } }
        if remaining.count != selection.count { selection = remaining }
        canvasView.needsDisplay = true
    }

    // MARK: Mouse state machine

    func mouseDown(at point: CGPoint, extendingSelection: Bool, clickCount: Int = 1) {
        guard let document else { return }
        // Clicking anywhere while typing just finishes the text box.
        if editing != nil {
            endEditing()
            return
        }
        view.window?.makeFirstResponder(canvasView)
        lastPoint = point

        // 1. A handle of something already selected → resize it.
        for graphic in selection.reversed() {
            if let handle = graphic.handle(under: point) {
                drag = .resizing(graphic, handle: handle, before: graphic.record)
                return
            }
        }

        // 2. An existing graphic (topmost first) → select and move.
        if let hit = document.graphics.last(where: { $0.isContentsUnderPoint(point) }) {
            if clickCount == 2, let text = hit as? TextBox {
                drag = .none
                beginEditing(text, before: text.record)
                return
            }
            let isSelected = selection.contains { $0 === hit }
            if extendingSelection {
                selection = isSelected ? selection.filter { $0 !== hit } : selection + [hit]
            } else if !isSelected {
                selection = [hit]
            }
            drag = .moving(selection.map { ($0, $0.record) })
            return
        }

        // 3. Empty canvas → start a new graphic with the current tool.
        if !extendingSelection { selection = [] }
        guard let type = settings.tool.graphicClass else {
            drag = .none
            return
        }
        let graphic = type.init(at: point, color: settings.color,
                                size: settings.size, hasShadow: settings.hasShadow)
        // Text boxes start typing on click instead of being dragged out.
        if let text = graphic as? TextBox {
            drag = .none
            beginEditing(text, before: nil)
            return
        }
        creatingGraphic = graphic
        drag = .creating(graphic, handle: type.creationSizingHandle)
    }

    func mouseDragged(to point: CGPoint) {
        let delta = CGVector(dx: point.x - lastPoint.x, dy: point.y - lastPoint.y)
        lastPoint = point

        switch drag {
        case .none:
            return
        case let .creating(graphic, handle):
            drag = .creating(graphic, handle: graphic.resize(movingHandle: handle, by: delta))
        case let .resizing(graphic, handle, before):
            drag = .resizing(graphic, handle: graphic.resize(movingHandle: handle, by: delta),
                             before: before)
        case let .moving(items):
            for (graphic, _) in items { graphic.translate(by: delta) }
        }
        canvasView.needsDisplay = true
    }

    func mouseUp(at point: CGPoint) {
        defer {
            drag = .none
            creatingGraphic = nil
            canvasView.needsDisplay = true
        }
        guard let document else { return }

        switch drag {
        case .none:
            break
        case let .creating(graphic, _):
            // Too small (a click, not a drag) → discard, like `didGetCreated`.
            guard graphic.isValidAfterCreation else { return }
            document.add(graphic, actionName: "Add \(type(of: graphic).tool.title)")
            selection = [graphic]
        case let .resizing(graphic, _, before):
            document.graphic(graphic, didChangeFrom: before, actionName: "Resize")
        case let .moving(items):
            for (graphic, before) in items {
                document.graphic(graphic, didChangeFrom: before, actionName: "Move")
            }
        }
    }

    // MARK: Text editing

    func beginEditing(_ text: TextBox, before: Graphic.Record?) {
        endEditing()
        let textView = NSTextView(frame: text.textFrame)
        textView.isRichText = false
        textView.allowsUndo = false  // the document records one undo step per edit session
        textView.drawsBackground = false
        textView.textContainerInset = .zero
        textView.textContainer?.lineFragmentPadding = 0
        textView.textContainer?.widthTracksTextView = false
        textView.isHorizontallyResizable = true
        textView.isVerticallyResizable = true
        textView.string = text.string
        textView.delegate = self
        canvasView.addSubview(textView)
        editing = Editing(text: text, textView: textView, before: before)
        selection = [text]
        styleTextView()
        textView.selectAll(nil)
        view.window?.makeFirstResponder(textView)
        canvasView.needsDisplay = true
    }

    /// Commits the text box: empty text is dropped, anything else becomes one undo step.
    func endEditing() {
        guard let editing, let document else { return }
        self.editing = nil
        editing.textView.delegate = nil
        editing.textView.removeFromSuperview()
        view.window?.makeFirstResponder(canvasView)

        let text = editing.text
        let isInDocument = document.graphics.contains { $0 === text }
        if text.string.trimmingCharacters(in: .whitespacesAndNewlines).isEmpty {
            selection = []
            if isInDocument { document.remove([text], actionName: "Delete Text") }
        } else if !isInDocument {
            document.add(text, actionName: "Add Text")
            selection = [text]
        } else if let before = editing.before {
            document.graphic(text, didChangeFrom: before, actionName: "Edit Text")
        }
        canvasView.needsDisplay = true
    }

    /// The text view only shows the caret and selection; the glyphs it lays out are
    /// clear so the TextBox graphic's outlined rendering underneath is what you see.
    private func styleTextView() {
        guard let editing else { return }
        let textView = editing.textView
        textView.font = editing.text.font
        textView.textColor = .clear
        textView.typingAttributes = [.font: editing.text.font, .foregroundColor: NSColor.clear]
        textView.insertionPointColor = editing.text.color
        textView.textContainer?.containerSize = CGSize(width: editing.text.wrapWidth ?? .greatestFiniteMagnitude,
                                                       height: .greatestFiniteMagnitude)
        textView.frame = editing.text.textFrame
    }

    // MARK: Editing

    func deleteSelection() {
        guard let document, !selection.isEmpty else { return }
        let removed = selection
        selection = []
        document.remove(removed, actionName: removed.count == 1 ? "Delete" : "Delete Graphics")
    }

    private func applyStyleToSelection(_ style: CanvasSettings.Style) {
        guard let document, !selection.isEmpty else { return }
        for graphic in selection {
            let before = graphic.record
            switch style {
            case .color: graphic.color = settings.color
            case .size: graphic.size = settings.size
            case .shadow: graphic.hasShadow = settings.hasShadow
            }
            graphic.invalidateCaches()
            // A text box being typed into isn't in the document yet if it's new.
            if document.graphics.contains(where: { $0 === graphic }) {
                document.graphic(graphic, didChangeFrom: before, actionName: "Change Style")
            }
        }
        styleTextView()
        canvasView.needsDisplay = true
    }

    @IBAction func delete(_ sender: Any?) { deleteSelection() }

    override func selectAll(_ sender: Any?) {
        selection = document?.graphics ?? []
    }

    @IBAction func zoomIn(_ sender: Any?) { scrollView.magnification *= 1.25 }
    @IBAction func zoomOut(_ sender: Any?) { scrollView.magnification /= 1.25 }
    @IBAction func zoomToActualSize(_ sender: Any?) { scrollView.magnification = 1 }

}

extension CanvasViewController: NSTextViewDelegate {
    func textDidChange(_ notification: Notification) {
        guard let editing else { return }
        editing.text.string = editing.textView.string
        editing.textView.frame = editing.text.textFrame
        canvasView.needsDisplay = true
    }

    /// Esc finishes the text box (keeps what was typed).
    func textView(_ textView: NSTextView, doCommandBy selector: Selector) -> Bool {
        if selector == #selector(NSResponder.cancelOperation(_:)) {
            endEditing()
            return true
        }
        return false
    }
}

extension CanvasViewController: NSMenuItemValidation {
    func validateMenuItem(_ item: NSMenuItem) -> Bool {
        switch item.action {
        case #selector(delete(_:)): !selection.isEmpty
        case #selector(selectAll(_:)): !(document?.graphics.isEmpty ?? true)
        default: true
        }
    }
}
