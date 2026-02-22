workspace "FlameSpearEngine"
    architecture "x86_64"
    configurations { "Debug", "Release" }
    startproject "FlameSpearEngine"

project "FlameSpearEngine"
    kind "ConsoleApp"
    language "C++"
    cppdialect "C++23"
    staticruntime "off"

    targetdir ("bin/%{cfg.buildcfg}")
    objdir ("bin-int/%{cfg.buildcfg}")

    files {
        "src/**.cpp",
        "src/**.h"
    }

    includedirs {
        "src/headers"
    }

    --
    -- MSVC (cl.exe)
    --
    filter "toolset:msc*"
        defines { "COMPILER_MSVC" }
        systemversion "latest"
        buildoptions {
            "/W4",          -- high warning level
            "/permissive-", -- strict C++ conformance
        }

    --
    -- GCC (g++)
    --
    filter "toolset:gcc"
        defines { "COMPILER_GCC" }
        buildoptions {
            "-Wall",
            "-Wextra",
            "-Wpedantic",
            "-Wconversion"
        }
        linkoptions {
            "-static-libstdc++",
            "-static-libgcc"
        }

    --
    -- Clang (clang++)
    --
    filter "toolset:clang"
        defines { "COMPILER_CLANG" }
        buildoptions {
            "-Wall",
            "-Wextra",
            "-Wpedantic",
            "-Wconversion"
        }

    --
    -- Debug / Release configs
    --
    filter "configurations:Debug"
        symbols "On"
        defines { "DEBUG" }

    filter "configurations:Release"
        optimize "On"
        defines { "NDEBUG" }

    filter {} -- clear filter