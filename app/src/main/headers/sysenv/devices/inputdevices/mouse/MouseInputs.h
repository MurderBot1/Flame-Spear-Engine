#ifndef MouseInputs_H
#define MouseInputs_H

namespace FSE::System::Devices::Input::DeviceClasses {
    enum BooleanMouseInputs {
        
    };
    
    enum FloatMouseInputs {
        
    };
    
    enum VectorMouseInputs {
        
    };

    int GetOSKeyCodeFromInput(BooleanMouseInputs input);
    int GetOSKeyCodeFromInput(FloatMouseInputs input);
    int GetOSKeyCodeFromInput(VectorMouseInputs input);
}

#endif