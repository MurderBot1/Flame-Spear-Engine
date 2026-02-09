plugins {
    `cpp-application`
    `cpp-unit-test`
}

application {
    targetMachines.add(machines.windows.x86_64)

    // Apply C++23 (or latest available) depending on compiler
    binaries.configureEach {
        compileTask.get().compilerArgs.addAll(
            when (toolChain) {
                is org.gradle.nativeplatform.toolchain.Gcc,
                is org.gradle.nativeplatform.toolchain.Clang ->
                    listOf("-std=c++23")

                is org.gradle.nativeplatform.toolchain.VisualCpp ->
                    listOf("/std:c++latest")

                else -> emptyList()
            }
        )
    }
}

// Run task
tasks.register<Exec>("run") {
    dependsOn(tasks.named("installDebug"))
    executable = layout.buildDirectory
        .file("install/main/debug/lib/${project.name}.exe")
        .get()
        .asFile
        .absolutePath
}

tasks.named<Exec>("run") {
    dependsOn(tasks.named("installDebug"))
    executable = layout.buildDirectory
        .file("install/main/debug/lib/${project.name}.exe")
        .get()
        .asFile
        .absolutePath
}
