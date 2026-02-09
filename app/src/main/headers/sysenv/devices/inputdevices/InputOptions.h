#ifndef InputOptions_H
#define InputOptions_H

namespace FSE::System::Devices::Input {
    enum class BooleanInputs {
        // Keyboard
        KEYBOARD_A,
        KEYBOARD_B,
        KEYBOARD_C,
        KEYBOARD_D,
        KEYBOARD_E,
        KEYBOARD_F,
        KEYBOARD_G,
        KEYBOARD_H,
        KEYBOARD_I,
        KEYBOARD_J,
        KEYBOARD_K,
        KEYBOARD_L,
        KEYBOARD_M,
        KEYBOARD_N,
        KEYBOARD_O,
        KEYBOARD_P,
        KEYBOARD_Q,
        KEYBOARD_R,
        KEYBOARD_S,
        KEYBOARD_T,
        KEYBOARD_U,
        KEYBOARD_V,
        KEYBOARD_W,
        KEYBOARD_X,
        KEYBOARD_Y,
        KEYBOARD_Z,
        KEYBOARD_0,
        KEYBOARD_1,
        KEYBOARD_2,
        KEYBOARD_3,
        KEYBOARD_4,
        KEYBOARD_5,
        KEYBOARD_6,
        KEYBOARD_7,
        KEYBOARD_8,
        KEYBOARD_9,

        // Controller
        CONTROLLER_A,
        CONTROLLER_B,
        CONTROLLER_X,
        CONTROLLER_Y,
        CONTROLLER_RIGHT_BUMPER,
        CONTROLLER_LEFT_BUMPER,
        CONTROLLER_RIGHT_TRIGGER,
        CONTROLLER_LEFT_TRIGGER,
        CONTROLLER_POV_UP,
        CONTROLLER_POV_DOWN,
        CONTROLLER_POV_LEFT,
        CONTROLLER_POV_RIGHT,

        // Joystick


        // Mouse
        MOUSE_RIGHT,
        MOUSE_MIDDLE,
        MOUSE_LEFT,
        MOUSE_SIDE_1,
        MOUSE_SIDE_2,
    };

    enum class FloatInputs {
        // Keyboard


        // Controller
        CONTROLLER_RIGHT_X,
        CONTROLLER_RIGHT_Y,
        CONTROLLER_LEFT_X,
        CONTROLLER_LEFT_Y,

        // Joystick
        JOYSTICK_X,
        JOYSTICK_Y,

        // Mouse
        MOUSE_X,
        MOUSE_Y,
    };
}

#endif