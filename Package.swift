// swift-tools-version:5.5
import PackageDescription

let package = Package(
    name: "LibDomain",
    platforms: [
        .iOS(.v15)
    ],
    products: [
        .library(
            name: "LibDomain",
            targets: ["LibDomain"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "LibDomain",
            path: "./LibDomain.xcframework"
        ),
    ]
)
