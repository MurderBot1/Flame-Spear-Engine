#ifndef Mouse_H
#define Mouse_H

#if defined(_WIN32) || defined(_WIN64)
    #include "sysenv/devices/inputdevices/mouse/osmouse/windows/WindowsMouse.h"
#elif defined(__linux__)
    #include "sysenv/devices/inputdevices/mouse/osmouse/linux/LinuxMouse.h"
#elif defined(__APPLE__)
    #include "sysenv/devices/inputdevices/mouse/osmouse/mac/MacMouse.h"
#endif

namespace FSE::System::Devices::Input::DeviceClasses {
    class Mouse 
    #if defined(_WIN32) || defined(_WIN64)
        : OSMouse::WindowsMouse
    #elif defined(__linux__)
        : OSMouse::LinuxMouse
    #elif defined(__APPLE__)
        : OSMouse::MacMouse
    #endif
    {
        
    };
}

#endif