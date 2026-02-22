#ifndef BaseJoystick_H
#define BaseJoystick_H

#include "sysenv/devices/inputdevices/joystick/JoystickInputs.h"

#include "types/vectors/Vector2.h"

namespace FSE::System::Devices::Input::DeviceClasses::OSJoystick {
    class BaseJoystick {
        public:
            virtual bool getInput(BooleanJoystickInputs input) = 0;
            virtual float getInput(FloatJoystickInputs input) = 0;
            virtual Types::Vectors::Vector2 getInput(VectorJoystickInputs input) = 0;
    };
}

#endif