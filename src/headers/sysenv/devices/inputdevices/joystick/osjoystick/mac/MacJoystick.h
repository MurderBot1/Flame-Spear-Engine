#ifndef MacJoystick_H
#define MacJoystick_H

#include "sysenv/devices/inputdevices/joystick/osjoystick/BaseJoystick.h"

namespace FSE::System::Devices::Input::DeviceClasses::OSJoystick {
    class MacJoystick : BaseJoystick {
        public:
            bool getInput(BooleanJoystickInputs input) override;
            float getInput(FloatJoystickInputs input) override;
            Types::Vectors::Vector2 getInput(VectorJoystickInputs input) override;
    };
}

#endif