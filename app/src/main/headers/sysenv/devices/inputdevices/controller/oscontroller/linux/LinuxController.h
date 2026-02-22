#ifndef LinuxController_H
#define LinuxController_H

#include "sysenv/devices/inputdevices/controller/oscontroller/BaseController.h"

namespace FSE::System::Devices::Input::DeviceClasses::OSController {
    class LinuxController : BaseController {
        public:
            bool getInput(BooleanControllerInputs input) override;
            float getInput(FloatControllerInputs input) override;
            Types::Vectors::Vector2 getInput(VectorControllerInputs input) override;
    };
}

#endif