#ifndef BaseKeyboardManager_H
#define BaseKeyboardManager_H

#include <vector>

#include "sysenv/devices/inputdevices/keyboard/Keyboard.h"

namespace FSE::System::Devices::Input::DeviceClasses::OSKeyboard {
    class BaseKeyboardManager {
        public:
            virtual void update() = 0;
        private:
            std::vector<Keyboard> devices;
    };
}

#endif