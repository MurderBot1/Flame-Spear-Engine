#ifndef ControllerManager_H
#define ControllerManager_H

#if defined(_WIN32) || defined(_WIN64)
    #include "sysenv/devices/inputdevices/controller/oscontroller/windows/WindowsControllerManager.h"
#elif defined(__linux__)
    #include "sysenv/devices/inputdevices/controller/oscontroller/linux/LinuxControllerManager.h"
#elif defined(__APPLE__)
    #include "sysenv/devices/inputdevices/controller/oscontroller/mac/MacControllerManager.h"
#endif

namespace FSE::System::Devices::Input::DeviceClasses {
    class ControllerManager 
    #if defined(_WIN32) || defined(_WIN64)
        : OSController::WindowsControllerManager
    #elif defined(__linux__)
        : OSController::LinuxControllerManager
    #elif defined(__APPLE__)
        : OSController::MacControllerManager
    #endif
    {
    };
}

#endif