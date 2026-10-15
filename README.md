# Annotate (native rebuild)

A native Apple Silicon rebuild of Annotate 2.1.4 (`se.razola.Glui2`, 2016). AppKit canvas, SwiftUI chrome, Swift 6, macOS 14+, arm64 only.

`reference/` is the source of truth for behavior (decompiled original). Start with `reference/REBUILD_SCOPE.md`.

## Status

| Tool | id | Status |
|------|----|--------|
| ShapeRectangle | 4 | Done: draw, select, move, resize via 4 corner handles, undo/redo |
| The other 9 | 0–3, 5–9 | Not ported yet (greyed out in the palette) |

**Screenshot capture** (same approach as the original: macOS's own `screencapture` tool, and the result opens as a new document):

| Command | Global shortcut | Original |
|---------|-----------------|----------|
| Capture Region | ⇧⌘2 | ⇧⌘5 (taken by macOS's screenshot toolbar since 2018) |
| Capture Window | ⇧⌘6 | same |
| New from Clipboard | ⇧⌘7 | same |
| Show all windows | ⇧⌘8 | same |

They're also in the menu bar icon and the File menu. The first capture asks for Screen Recording permission. Captures are saved to `~/Library/Caches/com.marcoledesma.Annotate/Captures/`. The app is signed with the Apple Development team (U738K5HP9R) so the permission survives rebuilds. Shortcuts can't be changed yet.

Also working: open an image (it becomes a new untitled doc, so the original image is never overwritten), save/reopen, export PNG at the image's native pixel size (File › Export PNG…, ⇧⌘E), color/size/shadow on the current selection, zoom.

## Layout

```
Annotate/
  App/        AppDelegate (programmatic main menu), DEBUG-only SelfTest
  Capture/    ScreenCapture (screencapture + clipboard), GlobalHotKeys (Carbon), StatusMenu
  Document/   Document (NSDocument: image + [Graphic] + undo), window controller
  Model/      Tool (palette ids), Graphic (base), Shape, ShapeRectangle
  Canvas/     CanvasView (drawing), CanvasViewController (mouse state machine, selection)
  Chrome/     SwiftUI tool palette + CanvasSettings
```

Values carried over from the original binary: stroke width by size `[2, 4, 8]`, default color sRGB `(1, 0.906, 0)` yellow, defaults size M + shadow on, 10pt blue handle dots with a white ring, shape hit-testing on the stroke only (min 10pt), shapes under 15pt² discarded.

## File format

`.annot`: JSON (`DocumentFile`) holding the image as base64 PNG next to a `[Graphic.Record]` list (tool id, sRGB color, size, shadow, handle points). Legacy `.annotate` files (NSKeyedArchiver) don't open yet. The keys can be recovered from each class's `initWithCoder:` in `reference/` if that's ever needed.

## Self-test (Debug builds)

Runs the rectangle tool through the real controller code: drag, resize, flip, move, undo/redo, save round-trip, PNG export.

```bash
xcodebuild -project Annotate.xcodeproj -scheme Annotate -derivedDataPath build/DerivedData build
build/DerivedData/Build/Products/Debug/Annotate.app/Contents/MacOS/Annotate -AnnotateSelfTestImage some.png -AnnotateSelfTestOut /tmp/out
```
