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
    -- Vulkan
    -- 
    filter "system:windows"
        systemversion "latest"
        includedirs {
            os.getenv("VULKAN_SDK") .. "/Include"
        }
        libdirs {
            os.getenv("VULKAN_SDK") .. "/Lib"
        }
        links { "vulkan-1" }

    filter "system:linux"
        includedirs {
            os.getenv("VULKAN_SDK") .. "/include"
        }
        libdirs {
            os.getenv("VULKAN_SDK") .. "/lib"
        }
        links { "vulkan" }
    
    filter "system:macosx"
        includedirs {
            os.getenv("VULKAN_SDK") .. "/include"
        }
        libdirs {
            os.getenv("VULKAN_SDK") .. "/lib"
        }
        links {
            "vulkan",     -- Vulkan loader
            "MoltenVK"    -- Metal-backed Vulkan implementation
        }
        -- Frameworks needed for MoltenVK
        linkoptions {
            "-framework Cocoa",
            "-framework QuartzCore",
            "-framework Metal"
        }

    --
    -- Debug / Release configs
    --
    filter "configurations:Debug"
        symbols "On"
        defines { "DEBUG" }

    filter "configurations:Release"
        optimize "On"
        defines { "RELEASE" }

    filter {} -- clear filter