#ifndef KeyboardManager_H
#define KeyboardManager_H

#include <vector>

#include "sysenv/devices/inputdevices/keyboard/Keyboard.h"

namespace FSE::System::Devices::Input::DeviceClasses {
    class KeyboardManager {
        private:
            std::vector<Keyboard> devices;
    };
}

#endif