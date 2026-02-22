#ifndef Joystick_H
#define Joystick_Hc

#if defined(_WIN32) || defined(_WIN64)
    #include "sysenv/devices/inputdevices/joystick/osjoystick/windows/WindowsJoystick.h"
#elif defined(__linux__)
    #include "sysenv/devices/inputdevices/joystick/osjoystick/linux/LinuxJoystick.h"
#elif defined(__APPLE__)
    #include "sysenv/devices/inputdevices/joystick/osjoystick/mac/MacJoystick.h"
#endif

namespace FSE::System::Devices::Input::DeviceClasses {
    class Joystick 
    #if defined(_WIN32) || defined(_WIN64)
        : OSJoystick::WindowsJoystick
    #elif defined(__linux__)
        : OSJoystick::LinuxJoystick
    #elif defined(__APPLE__)
        : OSJoystick::MacJoystick
    #endif
    {
    };
}

#endif