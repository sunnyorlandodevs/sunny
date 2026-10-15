# Annotate native rebuild — session brief

Paste this as the first message of a new session opened in this folder
(~/Projects/Personal/annotate-rebuild) on Opus 5.5.

---

Rebuild the abandoned macOS app "Annotate" (se.razola.Glui2, v2.1.4, 2016) as a modern,
native Apple Silicon app in the latest Xcode (Swift; AppKit for the canvas, SwiftUI for
chrome). The original is Intel-only Obj-C that runs only under Rosetta; goal is a clean
native rebuild.

START HERE — read first, in this folder:
- reference/REBUILD_SCOPE.md — architecture, the 10-tool palette, rebuild tiers, what to delete. Read before anything.
- reference/classes.h — full Obj-C interface for all original classes.
- reference/by_class/*.c — Ghidra pseudo-C for the 24 core drawing/canvas classes.
- reference/core_decomp.c — all 453 decompiled methods.
- reference/ghidra_pseudo.c + annotated_pseudo.md — worked 3-method deep dive.
- Original still installed at /Applications/Annotate.app (re-inspect with otool/radare2, or
  re-run Ghidra: /opt/homebrew/Cellar/ghidra/12.1.4/libexec/support/analyzeHeadless with
  JAVA_HOME=/opt/homebrew/opt/openjdk@21/libexec/openjdk.jdk/Contents/Home).

ARCHITECTURE (Sketch-style): Document (NSDocument) owns image + ordered [Graphic] + undo.
CanvasViewController owns tools, selection, mouse handling, undo grouping. CanvasView draws
image + graphics + selection handles. Graphic is the abstract base (color, size, shadow, 8
resize handles, z-index) with one subclass per tool.

THE 10 TOOLS (id → class): 0 ArrowNormal, 1 ArrowLine, 2 OverlayRectangle, 3 OverlayCircle,
4 ShapeRectangle, 5 ShapeCircle, 6 Pen, 7 Text, 8 Pixelate, 9 Crop. Entire feature surface.

v1 SCOPE (tight): 10 tools + canvas + selection/resize + undo/redo + open image + export PNG.
NO video/screen-recording, NO cloud upload, NO paywall/StoreKit (original isPro is hardcoded
true), NO analytics/crash/ReactiveCocoa — dead SaaS, do not port.

FIRST MILESTONE (before going wide): scaffold a fresh native-arm64 Xcode project and get ONE
tool working end to end — Graphic base + CanvasView rendering + ShapeRectangle: pick the
rectangle tool, drag on canvas, rectangle drawn in current color, selectable, resizable via
handles, undoable. Build it, confirm it runs natively (no Rosetta). Report back before the
other 9 tools.

FILE FORMAT: original saves are NSKeyedArchiver archives (see each class's
encodeWithCoder:/initWithCoder:). Legacy-open is NOT required for v1 — pick a clean modern
format (Codable) and note it; flag if you think legacy-open matters.

Init git here and commit the scaffold once the first milestone builds. Keep reference/ — it's
the source of truth. Match Marco's plain-spoken first-person voice in any docs/commits.
