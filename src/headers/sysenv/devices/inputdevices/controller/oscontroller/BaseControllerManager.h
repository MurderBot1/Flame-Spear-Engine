#ifndef BaseControllerManager_H
#define BaseControllerManager_H

#include <vector>

#include "sysenv/devices/inputdevices/controller/Controller.h"

namespace FSE::System::Devices::Input::DeviceClasses::OSController {
    class BaseControllerManager {
        private:
            std::vector<Controller> devices;
    };
}

#endif