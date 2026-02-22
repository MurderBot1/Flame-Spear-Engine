#ifndef ControllerInputs_H
#define ControllerInputs_H

namespace FSE::System::Devices::Input::DeviceClasses {
    enum BooleanControllerInputs {
        
    };

    enum FloatControllerInputs {
        
    };

    enum VectorControllerInputs {
        
    };

    int GetOSKeyCodeFromInput(BooleanControllerInputs input);
    int GetOSKeyCodeFromInput(FloatControllerInputs input);
    int GetOSKeyCodeFromInput(VectorControllerInputs input);
}

#endif