#include "sysenv/devices/inputdevices/keyboard/KeyboardInputs.h"

int FSE::System::Devices::Input::DeviceClasses::GetOSKeyCodeFromInput(BooleanKeyboardInputs input) {
    return static_cast<int>(input);
}

int FSE::System::Devices::Input::DeviceClasses::GetOSKeyCodeFromInput(FloatKeyboardInputs input) {
    return static_cast<int>(input);
}

int FSE::System::Devices::Input::DeviceClasses::GetOSKeyCodeFromInput(VectorKeyboardInputs input) {
    return static_cast<int>(input);
}