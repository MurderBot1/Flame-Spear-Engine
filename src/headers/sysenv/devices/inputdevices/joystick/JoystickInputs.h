#ifndef JoystickInputs_H
#define JoystickInputs_H

namespace FSE::System::Devices::Input::DeviceClasses {
    enum BooleanJoystickInputs {
        
    };
    
    enum FloatJoystickInputs {
        
    };
    
    enum VectorJoystickInputs {
        
    };

    int GetOSKeyCodeFromInput(BooleanJoystickInputs input);
    int GetOSKeyCodeFromInput(FloatJoystickInputs input);
    int GetOSKeyCodeFromInput(VectorJoystickInputs input);
}

#endif