#ifndef InputDevice_H
#define InputDevice_H

#include "sysenv/devices/inputdevices/controller/ControllerManager.h"
#include "sysenv/devices/inputdevices/joystick/JoystickManager.h"
#include "sysenv/devices/inputdevices/keyboard/KeyboardManager.h"
#include "sysenv/devices/inputdevices/mouse/MouseManager.h"

namespace FSE::System::Devices::Input {
    class InputDeviceManager {
        public:
            DeviceClasses::ControllerManager ControllerManager;
            DeviceClasses::JoystickManager JoystickManager;
            DeviceClasses::KeyboardManager KeyboardManager;
            DeviceClasses::MouseManager MouseManager;
    };
}

#endif