#ifndef KeyboardManager_H
#define KeyboardManager_H

#if defined(_WIN32) || defined(_WIN64)
    #include "sysenv/devices/inputdevices/keyboard/oskeyboard/windows/WindowsKeyboardManager.h"
#elif defined(__linux__)
    #include "sysenv/devices/inputdevices/keyboard/oskeyboard/linux/LinuxKeyboardManager.h"
#elif defined(__APPLE__)
    #include "sysenv/devices/inputdevices/keyboard/oskeyboard/mac/MacKeyboardManager.h"
#endif

namespace FSE::System::Devices::Input::DeviceClasses {
    class KeyboardManager
    #if defined(_WIN32) || defined(_WIN64)
        : OSKeyboard::WindowsKeyboardManager
    #elif defined(__linux__)
        : OSKeyboard::LinuxKeyboardManager
    #elif defined(__APPLE__)
        : OSKeyboard::MacKeyboardManager
    #endif 
    {
    };
}

#endif