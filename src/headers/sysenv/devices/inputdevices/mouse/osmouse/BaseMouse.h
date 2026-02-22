#ifndef BaseMouse_H
#define BaseMouse_H

#include "sysenv/devices/inputdevices/mouse/MouseInputs.h"

#include "types/vectors/Vector2.h"

namespace FSE::System::Devices::Input::DeviceClasses::OSMouse {
    class BaseMouse {
        public:
            virtual bool getInput(BooleanMouseInputs input) = 0;
            virtual float getInput(FloatMouseInputs input) = 0;
            virtual Types::Vectors::Vector2 getInput(VectorMouseInputs input) = 0;
    };
}

#endif