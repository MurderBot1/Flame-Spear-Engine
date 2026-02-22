#ifndef LinuxMouse_H
#define LinuxMouse_H

#include "sysenv/devices/inputdevices/mouse/osmouse/BaseMouse.h"

namespace FSE::System::Devices::Input::DeviceClasses::OSMouse {
    class LinuxMouse : BaseMouse {
        public:
            bool getInput(BooleanMouseInputs input) override;
            float getInput(FloatMouseInputs input) override;
            Types::Vectors::Vector2 getInput(VectorMouseInputs input) override;
    };
}

#endif