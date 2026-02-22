#ifndef MouseManager_H
#define MouseManager_H

#if defined(_WIN32) || defined(_WIN64)
    #include "sysenv/devices/inputdevices/mouse/osmouse/windows/WindowsMouseManager.h"
#elif defined(__linux__)
    #include "sysenv/devices/inputdevices/mouse/osmouse/linux/LinuxMouseManager.h"
#elif defined(__APPLE__)
    #include "sysenv/devices/inputdevices/mouse/osmouse/mac/MacMouseManager.h"
#endif

namespace FSE::System::Devices::Input::DeviceClasses {
    class MouseManager 
    #if defined(_WIN32) || defined(_WIN64)
        : OSMouse::WindowsMouseManager
    #elif defined(__linux__)
        : OSMouse::LinuxMouseManager
    #elif defined(__APPLE__)
        : OSMouse::MacMouseManager
    #endif
    {
    };
}

#endif