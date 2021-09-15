// swift-tools-version:5.5
import PackageDescription
let package = Package(
    name : "sourcegear-bridge-swift-framework-dotnet",
    products : [
        .library(
            name : "dotnet",
            targets : [
                "dotnet",
            ]
            ),
    ],
    dependencies : [
        .package(name: "sourcegear-bridge-lib-resolve-jumptable", url: "https://github.com/ericsink/sourcegear-bridge-lib-resolve-jumptable"),
    ],
    targets : [
        .target(
            name: "jumptable_dotnet",
            dependencies : [
                .product(name: "sg_resolve_jumptable", package: "sourcegear-bridge-lib-resolve-jumptable"),
            ],
            path: "C/dotnet"
            ),
        .target(
            name: "dotnet",
            dependencies : [
                .target(name: "jumptable_dotnet"),
            ],
            path: "Sources/dotnet"
            ),
    ]
)
