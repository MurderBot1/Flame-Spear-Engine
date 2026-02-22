#ifndef JoystickManager_H
#define JoystickManager_H

#if defined(_WIN32) || defined(_WIN64)
    #include "sysenv/devices/inputdevices/joystick/osjoystick/windows/WindowsJoystickManager.h"
#elif defined(__linux__)
    #include "sysenv/devices/inputdevices/joystick/osjoystick/linux/LinuxJoystickManager.h"
#elif defined(__APPLE__)
    #include "sysenv/devices/inputdevices/joystick/osjoystick/mac/MacJoystickManager.h"
#endif

namespace FSE::System::Devices::Input::DeviceClasses {
    class JoystickManager 
    #if defined(_WIN32) || defined(_WIN64)
        : OSJoystick::WindowsJoystickManager
    #elif defined(__linux__)
        : OSJoystick::LinuxJoystickManager
    #elif defined(__APPLE__)
        : OSJoystick::MacJoystickManager
    #endif
    {
    };
}

#endif