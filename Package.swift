// swift-tools-version: 5.6
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
  name: "roll-player-demo",
  products: [
    .library(name: "Roll", targets: ["Roll"])
  ],
  dependencies: [],
  targets: [
    .binaryTarget(
      name: "Roll",
      path: "Roll.xcframework"
    )
  ]
)
