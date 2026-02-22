#ifndef WindowsKeyboard_H
#define WindowsKeyboard_H

#include "sysenv/devices/inputdevices/keyboard/oskeyboard/BaseKeyboard.h"
#include <string>

namespace FSE::System::Devices::Input::DeviceClasses::OSKeyboard {
    class WindowsKeyboard : BaseKeyboard {
        public:
            WindowsKeyboard(HANDLE handle, std::wstring deviceName, RID_DEVICE_INFO info);
        public:
            bool getInput(BooleanKeyboardInputs input) override;
            float getInput(FloatKeyboardInputs input) override;
            Types::Vectors::Vector2 getInput(VectorKeyboardInputs input) override;
        private:
            HANDLE handle; 
            std::wstring deviceName; 
            RID_DEVICE_INFO info;
    };
}

#endif