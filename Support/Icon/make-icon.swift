// Draws Sunny's app icon at 1024×1024: a sun inside screenshot viewfinder brackets.
// Usage: swift Support/Icon/make-icon.swift <output.png>
import AppKit

let size: CGFloat = 1024
let out = CommandLine.arguments.dropFirst().first ?? "icon-1024.png"

let space = CGColorSpace(name: CGColorSpace.sRGB)!
let ctx = CGContext(data: nil, width: Int(size), height: Int(size), bitsPerComponent: 8, bytesPerRow: 0,
                    space: space, bitmapInfo: CGImageAlphaInfo.premultipliedLast.rawValue)!
func rgb(_ hex: UInt32, _ a: CGFloat = 1) -> CGColor {
    CGColor(srgbRed: CGFloat((hex >> 16) & 0xFF) / 255, green: CGFloat((hex >> 8) & 0xFF) / 255,
            blue: CGFloat(hex & 0xFF) / 255, alpha: a)
}

// macOS icon grid: 824pt body centered on the 1024 canvas, ~185pt corner radius.
let body = CGRect(x: 100, y: 100, width: 824, height: 824)
let squircle = CGPath(roundedRect: body, cornerWidth: 185, cornerHeight: 185, transform: nil)

// Soft drop shadow under the body.
ctx.saveGState()
ctx.setShadow(offset: CGSize(width: 0, height: -12), blur: 28, color: rgb(0x000000, 0.28))
ctx.addPath(squircle); ctx.setFillColor(rgb(0xFF9A2E)); ctx.fillPath()
ctx.restoreGState()

// Sunrise gradient (CG y is up: top of icon = maxY).
ctx.saveGState()
ctx.addPath(squircle); ctx.clip()
let gradient = CGGradient(colorsSpace: space, colors: [rgb(0xFFD54A), rgb(0xFF9A2E), rgb(0xFF5E3A)] as CFArray,
                          locations: [0, 0.55, 1])!
ctx.drawLinearGradient(gradient, start: CGPoint(x: 512, y: body.maxY), end: CGPoint(x: 512, y: body.minY), options: [])
// Gentle top highlight.
let gloss = CGGradient(colorsSpace: space, colors: [rgb(0xFFFFFF, 0.22), rgb(0xFFFFFF, 0)] as CFArray, locations: [0, 1])!
ctx.drawLinearGradient(gloss, start: CGPoint(x: 512, y: body.maxY), end: CGPoint(x: 512, y: 560), options: [])
ctx.restoreGState()

let center = CGPoint(x: 512, y: 512)
let navy = rgb(0x22263F)

// Viewfinder brackets.
ctx.saveGState()
ctx.setStrokeColor(navy); ctx.setLineWidth(46); ctx.setLineCap(.round); ctx.setLineJoin(.round)
let inset: CGFloat = 238, arm: CGFloat = 120
let box = CGRect(x: inset, y: inset, width: size - inset * 2, height: size - inset * 2)
for (corner, dx, dy) in [(CGPoint(x: box.minX, y: box.maxY), 1.0, -1.0), (CGPoint(x: box.maxX, y: box.maxY), -1.0, -1.0),
                         (CGPoint(x: box.maxX, y: box.minY), -1.0, 1.0), (CGPoint(x: box.minX, y: box.minY), 1.0, 1.0)] {
    ctx.move(to: CGPoint(x: corner.x, y: corner.y + dy * arm))
    ctx.addLine(to: corner)
    ctx.addLine(to: CGPoint(x: corner.x + dx * arm, y: corner.y))
}
ctx.strokePath()
ctx.restoreGState()

// Sun: white disc with eight rounded rays, soft shadow.
ctx.saveGState()
ctx.setShadow(offset: CGSize(width: 0, height: -6), blur: 16, color: rgb(0x8A2A00, 0.35))
ctx.beginTransparencyLayer(auxiliaryInfo: nil)
ctx.setFillColor(rgb(0xFFFFFF)); ctx.setStrokeColor(rgb(0xFFFFFF))
ctx.fillEllipse(in: CGRect(x: center.x - 112, y: center.y - 112, width: 224, height: 224))
ctx.setLineWidth(34); ctx.setLineCap(.round)
for i in 0..<8 {
    let angle = CGFloat(i) * .pi / 4 + .pi / 8
    let inner: CGFloat = 150, outer: CGFloat = 205
    ctx.move(to: CGPoint(x: center.x + cos(angle) * inner, y: center.y + sin(angle) * inner))
    ctx.addLine(to: CGPoint(x: center.x + cos(angle) * outer, y: center.y + sin(angle) * outer))
}
ctx.strokePath()
ctx.endTransparencyLayer()
ctx.restoreGState()

let rep = NSBitmapImageRep(cgImage: ctx.makeImage()!)
try! rep.representation(using: .png, properties: [:])!.write(to: URL(fileURLWithPath: out))
print("wrote \(out)")
