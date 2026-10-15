# Annotate 2.1.4 — decompiled methods (annotated)

Source: `/Applications/Annotate.app/Contents/MacOS/Annotate` (x86_64, Obj-C).
Decompiled with radare2 `pdc`, then hand-annotated into readable pseudo-Obj-C.

---

## 1. `-[PurchaseManager isPro]`  @ 0x100060eec

Raw: `eax = 1; return;`

```objc
- (BOOL)isPro {
    return YES;   // hardcoded — always returns pro
}
```

**Finding:** the Pro gate is wired to always return YES in this build. The whole
`PurchaseManager`/StoreKit paywall is effectively inert — every "is this user pro?"
check short-circuits to true. For a rebuild you can drop the entire purchase layer
(`PurchaseManager`, `PurchaseProWindowController`, StoreKit) with zero behavior loss.

---

## 2. `-[PurchaseManager upgradeToProWithTransaction:]`  @ 0x10006157e

```objc
- (void)upgradeToProWithTransaction:(SKPaymentTransaction *)txn {
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    [d setBool:YES forKey:@"com.driftt.mac.annotate.pro"];
    [[NSUserDefaults standardUserDefaults] synchronize];

    if (txn) {
        [[SKPaymentQueue defaultQueue] finishTransaction:txn];
    }
}
```

**Finding:** "pro" was persisted as a single NSUserDefaults bool
(`com.driftt.mac.annotate.pro`). Note it's never even read by `isPro` above — so the
flag is vestigial. Confirms the paywall is decorative in 2.1.4.

---

## 3. `-[Shape drawContentsInView:isBeingCreated:isBeingEdited:]`  @ 0x10005ab0d

This is the core render path for every shape (rectangle, circle, etc).

```objc
- (void)drawContentsInView:(id)view isBeingCreated:(id)c isBeingEdited:(id)e {
    [NSGraphicsContext saveGraphicsState];

    CGFloat scale = [NSGraphicsContext currentContextScaleFactor];

    if ([self hasShadow]) {
        CGContextRef ctx = [[NSGraphicsContext currentContext] graphicsPort];
        // builds a 50%-black shadow color (CGColorCreateGenericRGB, alpha 0.5)
        // offset/blur derived from `scale` (var_30h / var_40h)
        CGColorRef shadowColor = CGColorCreateGenericRGB(0, 0, 0, 0.5);
        CGContextSetShadowWithColor(ctx, offset, blur, shadowColor);
    }

    [[self color] set];                 // stroke color
    [[self drawingPath] stroke];        // NSBezierPath stroke

    [NSGraphicsContext restoreGraphicsState];
}
```

**Finding:** rendering is plain Cocoa — save state, optional drop shadow scaled to the
display, set the stroke color, stroke an `NSBezierPath`, restore. Every graphic subclass
just supplies its own `drawingPath` (see the `Shape`/`Arrow`/`Pen` interfaces). This is a
near-verbatim lift of Apple's old "Sketch" sample architecture, which means a native
rebuild is mostly re-expressing known patterns, not guessing.
```
```
