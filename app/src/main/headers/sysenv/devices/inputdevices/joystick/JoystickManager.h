#ifndef JoystickManager_H
#define JoystickManager_H

#include <vector>

#include "sysenv/devices/inputdevices/joystick/Joystick.h"

namespace FSE::System::Devices::Input::DeviceClasses {
    class JoystickManager {
        private:
            std::vector<Joystick> devices;
    };
}

#endif