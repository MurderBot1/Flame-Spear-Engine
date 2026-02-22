#ifndef Keyboard_H
#define Keyboard_H

#if defined(_WIN32) || defined(_WIN64)
    #include "sysenv/devices/inputdevices/keyboard/oskeyboard/windows/WindowsKeyboard.h"
#elif defined(__linux__)
    #include "sysenv/devices/inputdevices/keyboard/oskeyboard/linux/LinuxKeyboard.h"
#elif defined(__APPLE__)
    #include "sysenv/devices/inputdevices/keyboard/oskeyboard/mac/MacKeyboard.h"
#endif

namespace FSE::System::Devices::Input::DeviceClasses {
    class Keyboard 
    #if defined(_WIN32) || defined(_WIN64)
        : OSKeyboard::WindowsKeyboard
    #elif defined(__linux__)
        : OSKeyboard::LinuxKeyboard
    #elif defined(__APPLE__)
        : OSKeyboard::MacKeyboard
    #endif
    {  
    };
}

#endif