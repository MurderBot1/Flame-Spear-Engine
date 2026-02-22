#if defined(_WIN32) || defined(_WIN64)

#include "sysenv/devices/inputdevices/keyboard/oskeyboard/windows/WindowsKeyboard.h"

namespace FSE::System::Devices::Input::DeviceClasses::OSKeyboard {    
    bool WindowsKeyboard::getInput(BooleanKeyboardInputs input) {
        (void) input;
        return false;
    }
    
    float WindowsKeyboard::getInput(FloatKeyboardInputs input) {
        (void) input;
        return 0;
    }
    
    Types::Vectors::Vector2 WindowsKeyboard::getInput(VectorKeyboardInputs input) {
        (void) input;
        return Types::Vectors::Vector2::ZERO;
    }
}

#endif