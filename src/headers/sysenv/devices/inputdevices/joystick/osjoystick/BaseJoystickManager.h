#ifndef BaseJoystickManager_H
#define BaseJoystickManager_H
#include <vector>

#include "sysenv/devices/inputdevices/joystick/Joystick.h"

namespace FSE::System::Devices::Input::DeviceClasses::OSJoystick {
    class BaseJoystickManager {
        private:
            std::vector<Joystick> devices;
    };
}

#endif