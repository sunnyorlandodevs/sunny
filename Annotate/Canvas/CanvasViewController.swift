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

    func mouseDown(at point: CGPoint, extendingSelection: Bool) {
        guard let document else { return }
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
            document.graphic(graphic, didChangeFrom: before, actionName: "Change Style")
        }
    }

    @IBAction func delete(_ sender: Any?) { deleteSelection() }

    override func selectAll(_ sender: Any?) {
        selection = document?.graphics ?? []
    }

    @IBAction func zoomIn(_ sender: Any?) { scrollView.magnification *= 1.25 }
    @IBAction func zoomOut(_ sender: Any?) { scrollView.magnification /= 1.25 }
    @IBAction func zoomToActualSize(_ sender: Any?) { scrollView.magnification = 1 }

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
