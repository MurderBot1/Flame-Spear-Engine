#ifndef MouseManager_H
#define MouseManager_H

#include <vector>

#include "sysenv/devices/inputdevices/mouse/Mouse.h"

namespace FSE::System::Devices::Input::DeviceClasses {
    class MouseManager {
        private:
            std::vector<Mouse> devices;
    };
}

#endif