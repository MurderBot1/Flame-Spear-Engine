#ifndef MacMouse_H
#define MacMouse_H

#include "sysenv/devices/inputdevices/mouse/osmouse/BaseMouse.h"

namespace FSE::System::Devices::Input::DeviceClasses::OSMouse {
    class MacMouse : BaseMouse {
        public:
            bool getInput(BooleanMouseInputs input) override;
            float getInput(FloatMouseInputs input) override;
            Types::Vectors::Vector2 getInput(VectorMouseInputs input) override;
    };
}

#endif