import AppKit

/// Draws the image, the graphics, the graphic being created, and selection handles.
/// Flipped, sized to the canvas, so view coordinates are canvas coordinates.
final class CanvasView: NSView {
    weak var controller: CanvasViewController?

    override var isFlipped: Bool { true }
    override var acceptsFirstResponder: Bool { true }
    override var isOpaque: Bool { true }

    override func draw(_ dirtyRect: NSRect) {
        guard let controller, let document = controller.document,
              let context = NSGraphicsContext.current?.cgContext else { return }

        context.saveGState()
        context.clip(to: dirtyRect)
        document.drawCanvas(in: context)
        controller.creatingGraphic?.drawContents(in: context, isBeingCreated: true)
        // A brand-new text box isn't in the document until typing finishes.
        if let text = controller.editingText, !document.graphics.contains(where: { $0 === text }) {
            text.drawContents(in: context, isBeingCreated: true)
        }
        for graphic in controller.selection {
            graphic.drawHandles(in: context)
        }
        context.restoreGState()
    }

    override func resetCursorRects() {
        addCursorRect(bounds, cursor: .crosshair)
    }

    override func mouseDown(with event: NSEvent) {
        controller?.mouseDown(at: convert(event.locationInWindow, from: nil),
                              extendingSelection: event.modifierFlags.contains(.shift),
                              clickCount: event.clickCount)
    }

    override func mouseDragged(with event: NSEvent) {
        controller?.mouseDragged(to: convert(event.locationInWindow, from: nil))
    }

    override func mouseUp(with event: NSEvent) {
        controller?.mouseUp(at: convert(event.locationInWindow, from: nil))
    }

    override func keyDown(with event: NSEvent) {
        // Let Delete/Escape map to deleteBackward:/cancelOperation: etc.
        interpretKeyEvents([event])
    }

    override func deleteBackward(_ sender: Any?) { controller?.deleteSelection() }
    override func deleteForward(_ sender: Any?) { controller?.deleteSelection() }
    override func cancelOperation(_ sender: Any?) { controller?.selection = [] }
}

/// Keeps the canvas centered in the scroll view when it's smaller than the window.
final class CenteringClipView: NSClipView {
    override func constrainBoundsRect(_ proposedBounds: NSRect) -> NSRect {
        var rect = super.constrainBoundsRect(proposedBounds)
        guard let documentView else { return rect }
        let docFrame = documentView.frame
        if rect.width > docFrame.width { rect.origin.x = docFrame.midX - rect.width / 2 }
        if rect.height > docFrame.height { rect.origin.y = docFrame.midY - rect.height / 2 }
        return rect
    }
}
