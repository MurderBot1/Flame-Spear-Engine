#ifndef ControllerManager_H
#define ControllerManager_H

#include <vector>

#include "sysenv/devices/inputdevices/controller/Controller.h"

namespace FSE::System::Devices::Input::DeviceClasses {
    class ControllerManager {
        private:
            std::vector<Controller> devices;
    };
}

#endif