# Annotate 2.1.4 — native rebuild scope

Based on decompiling the full drawing/canvas core: **453 methods across 24 classes**,
all in `core_decomp.c` (18k lines) and split per-class in `by_class/`.

## What the app actually is (architecture)

A textbook **Sketch-style** vector annotation editor (Apple's old "Sketch" sample app
lineage). One base class `Graphic` with subclasses, a `CanvasView` that draws them, a
`CanvasViewController` that owns tools + selection + undo, and an `NSDocument` subclass
holding the image + the graphics array.

```
Document (NSDocument)
  └─ image + ordered [Graphic] + undo manager
CanvasViewController        ← tools, selection, mouse handling, undo grouping
  └─ CanvasView             ← draws image + graphics + selection handles
Graphic (abstract)         ← color, size, shadow, 8 resize handles, z-index
  ├─ ArrowNormal / ArrowLine        (Arrow base: NSBezierPath + hit path)
  ├─ ShapeRectangle / ShapeCircle   (Shape base: stroked NSBezierPath)
  ├─ OverlayRectangle / OverlayCircle (Overlay base: dim/spotlight)
  ├─ Pen                   (freehand: point list → smoothed path, RDP simplify)
  ├─ Text                  (NSTextView-backed, outline, bold/italic/underline)
  ├─ Pixelate              (region pixelation)
  └─ Crop                  (crop region)
HistoryManager / HistoryItem   ← recent uploads (NOT the undo system)
```

## The complete tool palette (decoded from `graphicClassForTool:`)

| tool id | class            | what it is                    |
|---------|------------------|-------------------------------|
| 0       | ArrowNormal      | arrow with head               |
| 1       | ArrowLine        | plain line                    |
| 2       | OverlayRectangle | rectangular highlight/dim     |
| 3       | OverlayCircle    | elliptical highlight/dim      |
| 4       | ShapeRectangle   | outlined rectangle            |
| 5       | ShapeCircle      | outlined ellipse              |
| 6       | Pen              | freehand pen                  |
| 7       | Text             | text box                      |
| 8       | Pixelate         | pixelate/blur region          |
| 9       | Crop             | crop                          |

That's the entire feature surface to reproduce. Ten tools.

## Rebuild tiers (easiest → hardest)

**Tier 1 — straightforward (well-known Cocoa):**
- `Graphic` base: color/size/shadow props, 8-handle model, hit testing
  (`isContentsUnderPoint:`, `handleUnderPoint:`), z-index ordering.
- `Shape*`, `Arrow*`, `Overlay*`: each is ~a path builder + a stroke/fill in
  `drawContentsInView:...` (we already decompiled Shape's — it's ~15 lines of real logic).
- `CanvasView` drawing + selection handles (`drawHandlesInView:`, `drawHandle:inView:atPoint:`).
- Document shell (`NSDocument` subclass, window controllers).

**Tier 2 — moderate:**
- `CanvasViewController` mouse state machine (`mouseDown:`/`mouseDragged:`/`mouseUp:`,
  `resizeByMovingHandle:...` is the single biggest method — the resize/scale math).
- Undo/redo: it's KVO-driven (`keysForValuesToObserveForUndo`,
  `observeValueForKeyPath:...`, `undoGroup*`). Modern Swift can do this more simply.
- `Pen`: freehand capture → `pathFromPoints:smooth:` + Ramer–Douglas–Peucker
  (`perpendicularDistanceSimplificationOnPoints:`). Both decompiled; portable.
- `Pixelate` / `Crop`: region ops over the backing image.

**Tier 3 — fiddly but contained:**
- `Text`: full `NSTextView` editing, outline rendering
  (`drawContentsWithOutline:andText:`), live resize to fit (`setSizeToMatchContents`).
- Emoji text support (`createCenteredEmojiTextWithString:`).
- Video annotation (`Video`, `VideoExporter`, `RecordScreen*`) — screen recording is the
  heaviest subsystem and the most macOS-version-sensitive. **Candidate to drop in v1.**

## What to DELETE outright (dead weight, ~half the binary)

None of these are needed for a working annotation editor, and all are abandoned SaaS:
- **Purchase/StoreKit** — `isPro` is hardcoded `true`; the whole paywall is inert.
- **Upload services** — CloudApp (`CL*`), Dropbox (`DB*`), Zendesk, Driftt (`DFT*`).
- **Analytics/crash** — Crashlytics/Fabric (`CLS*`, `FAB*`), Mixpanel, Segment.
- **ReactiveCocoa** (`RAC*`) — ~80 classes of FRP plumbing; replace with plain
  Swift/Combine or nothing.
- **AFNetworking, MPOAuth** — only existed to talk to those dead services.

Strip those and the actual app is the ~24 classes above.

## The one real compatibility decision: the file format

`Document dataOfType:error:` / `readFromData:ofType:error:` + every graphic's
`encodeWithCoder:`/`initWithCoder:` mean saved files are **`NSKeyedArchiver` archives**
of the graphics array. If you want a rebuild to **open your existing `.annotate` files**,
you must match those archive keys (recoverable from the `initWithCoder:` methods —
already decompiled). If you only care about going forward, pick any format you like and
skip this.

## Recommendation

This is a very rebuildable app — the design is a known pattern, the logic is small once
the SaaS is stripped, and we have clean pseudo-C for all of it. Realistic v1:
**the 10 tools + canvas + undo + image save/export, in SwiftUI/AppKit, no video, no
cloud.** The resize/handle math and Text editing are the only parts that need careful
porting; everything else is mechanical.

Files:
- `core_decomp.c` — all 453 methods.
- `by_class/*.c` — same, grouped by class.
- `classes.h` — full Obj-C interface for all 380 classes.
- `annotated_pseudo.md` / `ghidra_pseudo.c` — the earlier 3-method deep dive.
