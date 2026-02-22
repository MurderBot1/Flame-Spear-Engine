#ifndef LinuxKeyboard_H
#define LinuxKeyboard_H

#include "sysenv/devices/inputdevices/keyboard/oskeyboard/BaseKeyboard.h"

namespace FSE::System::Devices::Input::DeviceClasses::OSKeyboard {
    class LinuxKeyboard : BaseKeyboard {
        public:
            bool getInput(BooleanKeyboardInputs input) override;
            float getInput(FloatKeyboardInputs input) override;
            Types::Vectors::Vector2 getInput(VectorKeyboardInputs input) override;
    };
}

#endif