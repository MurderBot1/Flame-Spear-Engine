#ifndef WindowsKeyboardManager_H
#define WindowsKeyboardManager_H

#include "sysenv/devices/inputdevices/keyboard/oskeyboard/BaseKeyboardManager.h"

namespace FSE::System::Devices::Input::DeviceClasses::OSKeyboard {
    class WindowsKeyboardManager : BaseKeyboardManager {
        public:
            void update() override;
    };
}

#endif