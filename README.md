# Sunny

A menu bar screenshot tool: capture a region or window and it opens in a window for quick annotation (arrows, boxes, spotlight, outlined text), then copy or save it as a PNG.

Sunny is a native Apple Silicon rebuild of the abandoned Annotate 2.1.4 (`se.razola.Glui2`, 2016). AppKit canvas, SwiftUI chrome, Swift 6, macOS 14+, arm64 only.

`reference/` is the source of truth for behavior (decompiled original). Start with `reference/REBUILD_SCOPE.md`.

## How it works

The app runs in the background: no Dock icon, just a sun-in-a-viewfinder icon in the menu bar. Nothing opens at launch.

| Action | Shortcut |
|--------|----------|
| Capture Region | ⇧⌘5 (global) |
| Capture Window | ⇧⌘6 (global) |
| New from Clipboard | ⇧⌘7 (global) |
| Show all windows | ⇧⌘8 (global) |
| Copy image to clipboard (toast confirms; window stays open) | ⇧⌘C |
| Save as PNG | ⌘S |

- **Shortcuts:** they match the original. ⇧⌘5 only reaches the app if macOS's own "Screenshot and recording options" shortcut is turned off (System Settings › Keyboard › Keyboard Shortcuts › Screenshots).
- **Captures:** they use macOS's `screencapture` tool (`-o -i [-W]`), and the first one asks for Screen Recording permission. Captures are saved to `~/Library/Caches/com.marcoledesma.Sunny/Captures/`.
- **Signing:** the app is signed with the Apple Development team (U738K5HP9R) so that permission survives rebuilds.
- **Open at Login:** a toggle in the menu bar menu.

## Tools (MVP)

| Tool | Behavior |
|------|----------|
| Arrow | Drag from where it points to where it comes from. Filled, tapered arrow. Two handles. |
| Rectangle / Ellipse | Drag out a box. Four corner handles. Clicking the hollow middle doesn't select it. |
| Spotlight | Like the rectangle, but everything outside it is darkened (33% black, from the original). Several spotlights cut several holes. Arrows, boxes and text stay bright on top. |
| Text | Click and type. Bold Helvetica Neue, 20/28/43pt for S/M/L, with an outline (black on light colors, white plus a shadow on dark ones). Double-click to edit. Side handles set the wrap width. Esc or a click elsewhere finishes. |

Common to all of them:
- **Style:** color, size and shadow apply to new graphics and to the current selection.
- **Remembered settings:** the tool and style carry over to the next capture.
- **Editing:** everything can be undone and redone (⌘Z / ⇧⌘Z), and Delete removes the selection.

Not ported yet (in `Tool`, hidden from the palette): line, spotlight circle, pen, pixelate, crop.

Values carried over from the original binary:
- **Shapes:** stroke `[2, 4, 8]`; default color sRGB `(1, 0.906, 0)` yellow.
- **Arrow:** head half-width `[12, 15, 24]`; head length 1.6× that.
- **Text:** outline width `2·max(2.5, ⌈fontSize/24⌉)`, with the "isLight" luminance test (≥ 0.6) deciding outline color.
- **Handles:** 10pt blue dots with a white ring.

## Saving

Saving writes a flattened PNG at the image's native pixel size (2x for Retina captures). Annotations aren't editable after saving; that's the tradeoff for plain PNGs. Opening an existing image makes a new untitled document, so ⌘S never overwrites the source screenshot.

Closing a window or quitting never asks about unsaved changes (`isDocumentEdited` is always false). Annotations are throwaway unless you copy or save them, and there's no autosave.

## Layout

```
Sunny/
  App/        AppDelegate (accessory app, programmatic main menu), DEBUG-only SelfTest
  Capture/    ScreenCapture (screencapture + clipboard), GlobalHotKeys (Carbon), StatusMenu
  Document/   Document (NSDocument: image + [Graphic] + undo, PNG save, copy), window + toast
  Model/      Tool, Graphic (base), Shape, ShapeRectangle, ShapeCircle, OverlayRectangle, ArrowNormal, TextBox
  Canvas/     CanvasView (drawing), CanvasViewController (mouse state machine, selection, text editing)
  Chrome/     SwiftUI tool palette + CanvasSettings (persisted)
```

## Building a release

```bash
xcodebuild -project Sunny.xcodeproj -scheme Sunny -configuration Release -derivedDataPath build/DerivedData build
ditto -c -k --keepParent build/DerivedData/Build/Products/Release/Sunny.app build/release/Sunny-1.0.zip
```

The app icon comes from `Support/Icon/make-icon.swift` (it draws the 1024px master; the sizes in `Sunny/Assets.xcassets/AppIcon.appiconset` are scaled from it with `sips`).

The build is signed with an Apple Development certificate, not Developer ID, and isn't notarized. It runs on this Mac. On another Mac, Gatekeeper will block it until it's allowed in System Settings › Privacy & Security.

## Self-test (Debug builds)

Drives the real controller code for every tool: drawing, resizing, moving, text typing and editing, undo/redo, PNG save, copy, and closing without a prompt. It restores your clipboard and settings afterwards.

```bash
xcodebuild -project Sunny.xcodeproj -scheme Sunny -derivedDataPath build/DerivedData build
build/DerivedData/Build/Products/Debug/Sunny.app/Contents/MacOS/Sunny -SunnySelfTestImage some.png -SunnySelfTestOut /tmp/out
```
