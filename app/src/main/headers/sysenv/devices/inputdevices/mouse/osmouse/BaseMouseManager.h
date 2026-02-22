#ifndef BaseMouseManager_H
#define BaseMouseManager_H

#include <vector>

#include "sysenv/devices/inputdevices/mouse/Mouse.h"

namespace FSE::System::Devices::Input::DeviceClasses::OSMouse {
    class BaseMouseManager {
        private:
            std::vector<Mouse> devices;
    };
}

#endif