#ifndef Controller_H
#define Controller_H

#if defined(_WIN32) || defined(_WIN64)
    #include "sysenv/devices/inputdevices/controller/oscontroller/windows/WindowsController.h"
#elif defined(__linux__)
    #include "sysenv/devices/inputdevices/controller/oscontroller/linux/LinuxController.h"
#elif defined(__APPLE__)
    #include "sysenv/devices/inputdevices/controller/oscontroller/mac/MacController.h"
#endif

namespace FSE::System::Devices::Input::DeviceClasses {
    class Controller 
    #if defined(_WIN32) || defined(_WIN64)
        : OSController::WindowsController
    #elif defined(__linux__)
        : OSController::LinuxController
    #elif defined(__APPLE__)
        : OSController::MacController
    #endif
    {
        
    };
}

#endif