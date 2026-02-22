#ifndef BaseKeyboard_H
#define BaseKeyboard_H

#include "sysenv/devices/inputdevices/keyboard/KeyboardInputs.h"

#include "types/vectors/Vector2.h"

namespace FSE::System::Devices::Input::DeviceClasses::OSKeyboard {
    class BaseKeyboard {
        public:
            virtual bool getInput(BooleanKeyboardInputs input) = 0;
            virtual float getInput(FloatKeyboardInputs input) = 0;
            virtual Types::Vectors::Vector2 getInput(VectorKeyboardInputs input) = 0;
    };
}

#endif