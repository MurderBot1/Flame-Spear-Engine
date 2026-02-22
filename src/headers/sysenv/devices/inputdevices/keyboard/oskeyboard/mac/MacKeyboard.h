#ifndef MacKeyboard_H
#define MacKeyboard_H

#include "sysenv/devices/inputdevices/keyboard/oskeyboard/BaseKeyboard.h"

namespace FSE::System::Devices::Input::DeviceClasses::OSKeyboard {
    class MacKeyboard : BaseKeyboard {
        public:
            bool getInput(BooleanKeyboardInputs input) override;
            float getInput(FloatKeyboardInputs input) override;
            Types::Vectors::Vector2 getInput(VectorKeyboardInputs input) override;
    };
}

#endif