#ifndef BaseController_H
#define BaseController_H

#include "sysenv/devices/inputdevices/controller/ControllerInputs.h"

#include "types/vectors/Vector2.h"

namespace FSE::System::Devices::Input::DeviceClasses::OSController {
    class BaseController {
        public:
            virtual bool getInput(BooleanControllerInputs input) = 0;
            virtual float getInput(FloatControllerInputs input) = 0;
            virtual Types::Vectors::Vector2 getInput(VectorControllerInputs input) = 0;
    };
}

#endif