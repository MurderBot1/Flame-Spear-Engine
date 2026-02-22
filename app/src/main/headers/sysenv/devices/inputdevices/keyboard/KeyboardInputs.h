#ifndef KeyboardInputs_H
#define KeyboardInputs_H

#include "defines/EnumDefines.h"
#include "defines/WindowsDefines.h"

#if defined(_WIN32) || defined(_WIN64)
    #include "windows.h";
#elif defined(__linux__)
    #include ""
#elif defined(__APPLE__)
    #include ""
#endif

namespace FSE::System::Devices::Input::DeviceClasses {
    /// @brief Keyboard inputs that result in a true / false hexadecimal value
    enum BooleanKeyboardInputs {
        /// @brief This is the keyboard input enum for the backspace key
        ENUM_DEF(KEYBOARD_BACKSPACE, VK_BACK, 0, 0) 
        
        /// @brief This is the keyboard input enum for the tab key
        ENUM_DEF(KEYBOARD_TAB, VK_TAB, 0, 0) 
        
        /// @brief This is the keyboard input enum for the clear key
        ENUM_DEF(KEYBOARD_CLEAR, VK_CLEAR, 0, 0) 
        
        /// @brief This is the keyboard input enum for the enter key
        ENUM_DEF(KEYBOARD_ENTER, VK_RETURN, 0, 0) 
        
        /// @brief This is the keyboard input enum for either shift key
        ENUM_DEF(KEYBOARD_SHIFT, VK_SHIFT, 0, 0) 
        
        /// @brief This is the keyboard input enum for either control key
        ENUM_DEF(KEYBOARD_CONTROL, VK_CONTROL, 0, 0) 
        
        /// @brief This is the keyboard input enum for either alt key
        ENUM_DEF(KEYBOARD_ALT, VK_MENU, 0, 0) 
        
        /// @brief This is the keyboard input enum for the pause key
        ENUM_DEF(KEYBOARD_PAUSE, VK_PAUSE, 0, 0) 
        
        /// @brief This is the keyboard input enum for the caps lock key
        ENUM_DEF(KEYBOARD_CAPS_LOCK, VK_CAPITAL, 0, 0) 
        
        /// @brief This is the keyboard input enum for the escape key
        ENUM_DEF(KEYBOARD_ESCAPE, VK_ESCAPE, 0, 0) 
        
        /// @brief This is the keyboard input enum for the space key
        ENUM_DEF(KEYBOARD_SPACEBAR, VK_SPACE, 0, 0) 
        
        /// @brief This is the keyboard input enum for the page up key
        ENUM_DEF(KEYBOARD_PAGE_UP, VK_PRIOR, 0, 0) 
        
        /// @brief This is the keyboard input enum for the page down key
        ENUM_DEF(KEYBOARD_PAGE_DOWN, VK_NEXT, 0, 0) 
        
        /// @brief This is the keyboard input enum for the end key
        ENUM_DEF(KEYBOARD_END, VK_END, 0, 0) 
        
        /// @brief This is the keyboard input enum for the home key
        ENUM_DEF(KEYBOARD_HOME, VK_HOME, 0, 0) 
        
        /// @brief This is the keyboard input enum for the up arrow key
        ENUM_DEF(KEYBOARD_UP, VK_UP, 0, 0) 
        
        /// @brief This is the keyboard input enum for the down arrow key
        ENUM_DEF(KEYBOARD_DOWN, VK_DOWN, 0, 0) 
        
        /// @brief This is the keyboard input enum for the left arrow key
        ENUM_DEF(KEYBOARD_LEFT, VK_LEFT, 0, 0) 
        
        /// @brief This is the keyboard input enum for the right arrow key
        ENUM_DEF(KEYBOARD_RIGHT, VK_RIGHT, 0, 0) 
        
        /// @brief This is the keyboard input enum for the select key
        ENUM_DEF(KEYBOARD_SELECT, VK_SELECT, 0, 0) 
        
        /// @brief This is the keyboard input enum for the print (printer) key
        ENUM_DEF(KEYBOARD_PRINT, VK_PRINT, 0, 0) 
        
        /// @brief This is the keyboard input enum for the execute key
        ENUM_DEF(KEYBOARD_EXECUTE, VK_EXECUTE, 0, 0) 
        
        /// @brief This is the keyboard input enum for the print screen key
        ENUM_DEF(KEYBOARD_PRINT_SCREEN, VK_SNAPSHOT, 0, 0) 
        
        /// @brief This is the keyboard input enum for the insert key
        ENUM_DEF(KEYBOARD_INSERT, VK_INSERT, 0, 0) 
        
        /// @brief This is the keyboard input enum for the delete key
        ENUM_DEF(KEYBOARD_DELETE, VK_DELETE, 0, 0) 
        
        /// @brief This is the keyboard input enum for the help key
        ENUM_DEF(KEYBOARD_HELP, VK_HELP, 0, 0) 
        
        /// @brief This is the keyboard input enum for the number 0 key
        ENUM_DEF(KEYBOARD_0, VK_0, 0, 0) 
        
        /// @brief This is the keyboard input enum for the number 1 key
        ENUM_DEF(KEYBOARD_1, VK_1, 0, 0) 
        
        /// @brief This is the keyboard input enum for the number 2 key
        ENUM_DEF(KEYBOARD_2, VK_2, 0, 0) 
        
        /// @brief This is the keyboard input enum for the number 3 key
        ENUM_DEF(KEYBOARD_3, VK_3, 0, 0) 
        
        /// @brief This is the keyboard input enum for the number 4 key
        ENUM_DEF(KEYBOARD_4, VK_4, 0, 0) 
        
        /// @brief This is the keyboard input enum for the number 5 key
        ENUM_DEF(KEYBOARD_5, VK_5, 0, 0) 
        
        /// @brief This is the keyboard input enum for the number 6 key
        ENUM_DEF(KEYBOARD_6, VK_6, 0, 0) 
        
        /// @brief This is the keyboard input enum for the number 7 key
        ENUM_DEF(KEYBOARD_7, VK_7, 0, 0) 
        
        /// @brief This is the keyboard input enum for the number 8 key
        ENUM_DEF(KEYBOARD_8, VK_8, 0, 0) 
        
        /// @brief This is the keyboard input enum for the number 9 key
        ENUM_DEF(KEYBOARD_9, VK_9, 0, 0) 
        
        /// @brief This is the keyboard input enum for the A key
        ENUM_DEF(KEYBOARD_A, VK_A, 0, 0) 
        
        /// @brief This is the keyboard input enum for the B key
        ENUM_DEF(KEYBOARD_B, VK_B, 0, 0) 
        
        /// @brief This is the keyboard input enum for the C key
        ENUM_DEF(KEYBOARD_C, VK_C, 0, 0) 
        
        /// @brief This is the keyboard input enum for the D key
        ENUM_DEF(KEYBOARD_D, VK_D, 0, 0) 
        
        /// @brief This is the keyboard input enum for the E key
        ENUM_DEF(KEYBOARD_E, VK_E, 0, 0) 
        
        /// @brief This is the keyboard input enum for the F key
        ENUM_DEF(KEYBOARD_F, VK_F, 0, 0) 
        
        /// @brief This is the keyboard input enum for the G key
        ENUM_DEF(KEYBOARD_G, VK_G, 0, 0) 
        
        /// @brief This is the keyboard input enum for the H key
        ENUM_DEF(KEYBOARD_H, VK_H, 0, 0) 
        
        /// @brief This is the keyboard input enum for the I key
        ENUM_DEF(KEYBOARD_I, VK_I, 0, 0) 
        
        /// @brief This is the keyboard input enum for the J key
        ENUM_DEF(KEYBOARD_J, VK_J, 0, 0) 
        
        /// @brief This is the keyboard input enum for the K key
        ENUM_DEF(KEYBOARD_K, VK_K, 0, 0) 
        
        /// @brief This is the keyboard input enum for the L key
        ENUM_DEF(KEYBOARD_L, VK_L, 0, 0) 
        
        /// @brief This is the keyboard input enum for the M key
        ENUM_DEF(KEYBOARD_M, VK_M, 0, 0) 
        
        /// @brief This is the keyboard input enum for the N key
        ENUM_DEF(KEYBOARD_N, VK_N, 0, 0) 
        
        /// @brief This is the keyboard input enum for the O key
        ENUM_DEF(KEYBOARD_O, VK_O, 0, 0) 
        
        /// @brief This is the keyboard input enum for the P key
        ENUM_DEF(KEYBOARD_P, VK_P, 0, 0) 
        
        /// @brief This is the keyboard input enum for the Q key
        ENUM_DEF(KEYBOARD_Q, VK_Q, 0, 0) 
        
        /// @brief This is the keyboard input enum for the R key
        ENUM_DEF(KEYBOARD_R, VK_R, 0, 0) 
        
        /// @brief This is the keyboard input enum for the S key
        ENUM_DEF(KEYBOARD_S, VK_S, 0, 0) 
        
        /// @brief This is the keyboard input enum for the T key
        ENUM_DEF(KEYBOARD_T, VK_T, 0, 0) 
        
        /// @brief This is the keyboard input enum for the U key
        ENUM_DEF(KEYBOARD_U, VK_U, 0, 0) 
        
        /// @brief This is the keyboard input enum for the V key
        ENUM_DEF(KEYBOARD_V, VK_V, 0, 0) 
        
        /// @brief This is the keyboard input enum for the W key
        ENUM_DEF(KEYBOARD_W, VK_W, 0, 0) 
        
        /// @brief This is the keyboard input enum for the X key
        ENUM_DEF(KEYBOARD_X, VK_X, 0, 0) 
        
        /// @brief This is the keyboard input enum for the Y key
        ENUM_DEF(KEYBOARD_Y, VK_Y, 0, 0) 
        
        /// @brief This is the keyboard input enum for the Z key
        ENUM_DEF(KEYBOARD_Z, VK_Z, 0, 0) 
        
        /// @brief This is the keyboard input enum for the left OS key
        ENUM_DEF(KEYBOARD_OS_LEFT, VK_LWIN, 0, 0) 
        
        /// @brief This is the keyboard input enum for the right OS key
        ENUM_DEF(KEYBOARD_OS_RIGHT, VK_RWIN, 0, 0) 
        
        /// @brief This is the keyboard input enum for the application key
        ENUM_DEF(KEYBOARD_APPLICATION, VK_APPS, 0, 0) 
        
        /// @brief This is the keyboard input enum for the sleep key
        ENUM_DEF(KEYBOARD_SLEEP, VK_SLEEP, 0, 0) 
        
        /// @brief This is the keyboard input enum for the numpad 0 key
        ENUM_DEF(KEYBOARD_NUMPAD_0, VK_NUMPAD0, 0, 0) 
        
        /// @brief This is the keyboard input enum for the numpad 1 key
        ENUM_DEF(KEYBOARD_NUMPAD_1, VK_NUMPAD1, 0, 0) 
        
        /// @brief This is the keyboard input enum for the numpad 2 key
        ENUM_DEF(KEYBOARD_NUMPAD_2, VK_NUMPAD2, 0, 0) 
        
        /// @brief This is the keyboard input enum for the numpad 3 key
        ENUM_DEF(KEYBOARD_NUMPAD_3, VK_NUMPAD3, 0, 0) 
        
        /// @brief This is the keyboard input enum for the numpad 4 key
        ENUM_DEF(KEYBOARD_NUMPAD_4, VK_NUMPAD4, 0, 0) 
        
        /// @brief This is the keyboard input enum for the numpad 5 key
        ENUM_DEF(KEYBOARD_NUMPAD_5, VK_NUMPAD5, 0, 0) 
        
        /// @brief This is the keyboard input enum for the numpad 6 key
        ENUM_DEF(KEYBOARD_NUMPAD_6, VK_NUMPAD6, 0, 0) 
        
        /// @brief This is the keyboard input enum for the numpad 7 key
        ENUM_DEF(KEYBOARD_NUMPAD_7, VK_NUMPAD7, 0, 0) 
        
        /// @brief This is the keyboard input enum for the numpad 8 key
        ENUM_DEF(KEYBOARD_NUMPAD_8, VK_NUMPAD8, 0, 0) 
        
        /// @brief This is the keyboard input enum for the numpad 9 key
        ENUM_DEF(KEYBOARD_NUMPAD_9, VK_NUMPAD9, 0, 0) 
        
        /// @brief This is the keyboard input enum for the multiplication key
        ENUM_DEF(KEYBOARD_MULTIPLY, VK_MULTIPLY, 0, 0) 
        
        /// @brief This is the keyboard input enum for the addition key
        ENUM_DEF(KEYBOARD_ADD, VK_ADD, 0, 0) 
        
        /// @brief This is the keyboard input enum for the subtraction key
        ENUM_DEF(KEYBOARD_SUBTRACT, VK_SUBTRACT, 0, 0) 
        
        /// @brief This is the keyboard input enum for the deximal key
        ENUM_DEF(KEYBOARD_DECIMAL, VK_DECIMAL, 0, 0) 
        
        /// @brief This is the keyboard input enum for the division key
        ENUM_DEF(KEYBOARD_DIVIDE, VK_DIVIDE, 0, 0) 
        
        /// @brief This is the keyboard input enum for the function 1 key
        ENUM_DEF(KEYBOARD_FUNCTION_1, VK_F1, 0, 0) 
        
        /// @brief This is the keyboard input enum for the function 2 key
        ENUM_DEF(KEYBOARD_FUNCTION_2, VK_F2, 0, 0) 
        
        /// @brief This is the keyboard input enum for the function 3 key
        ENUM_DEF(KEYBOARD_FUNCTION_3, VK_F3, 0, 0) 
        
        /// @brief This is the keyboard input enum for the function 4 key
        ENUM_DEF(KEYBOARD_FUNCTION_4, VK_F4, 0, 0) 
        
        /// @brief This is the keyboard input enum for the function 5 key
        ENUM_DEF(KEYBOARD_FUNCTION_5, VK_F5, 0, 0) 
        
        /// @brief This is the keyboard input enum for the function 6 key
        ENUM_DEF(KEYBOARD_FUNCTION_6, VK_F6, 0, 0) 
        
        /// @brief This is the keyboard input enum for the function 7 key
        ENUM_DEF(KEYBOARD_FUNCTION_7, VK_F7, 0, 0) 
        
        /// @brief This is the keyboard input enum for the function 8 key
        ENUM_DEF(KEYBOARD_FUNCTION_8, VK_F8, 0, 0) 
        
        /// @brief This is the keyboard input enum for the function 9 key
        ENUM_DEF(KEYBOARD_FUNCTION_9, VK_F9, 0, 0) 
        
        /// @brief This is the keyboard input enum for the function 10 key
        ENUM_DEF(KEYBOARD_FUNCTION_10, VK_F10, 0, 0) 
        
        /// @brief This is the keyboard input enum for the function 11 key
        ENUM_DEF(KEYBOARD_FUNCTION_11, VK_F11, 0, 0) 
        
        /// @brief This is the keyboard input enum for the function 12 key
        ENUM_DEF(KEYBOARD_FUNCTION_12, VK_F12, 0, 0) 
        
        /// @brief This is the keyboard input enum for the function 13 key
        ENUM_DEF(KEYBOARD_FUNCTION_13, VK_F13, 0, 0) 
        
        /// @brief This is the keyboard input enum for the function 14 key
        ENUM_DEF(KEYBOARD_FUNCTION_14, VK_F14, 0, 0) 
        
        /// @brief This is the keyboard input enum for the function 15 key
        ENUM_DEF(KEYBOARD_FUNCTION_15, VK_F15, 0, 0) 
        
        /// @brief This is the keyboard input enum for the function 16 key
        ENUM_DEF(KEYBOARD_FUNCTION_16, VK_F16, 0, 0) 
        
        /// @brief This is the keyboard input enum for the function 17 key
        ENUM_DEF(KEYBOARD_FUNCTION_17, VK_F17, 0, 0) 
        
        /// @brief This is the keyboard input enum for the function 18 key
        ENUM_DEF(KEYBOARD_FUNCTION_18, VK_F18, 0, 0) 
        
        /// @brief This is the keyboard input enum for the function 19 key
        ENUM_DEF(KEYBOARD_FUNCTION_19, VK_F19, 0, 0) 
        
        /// @brief This is the keyboard input enum for the function 20 key
        ENUM_DEF(KEYBOARD_FUNCTION_20, VK_F20, 0, 0) 
        
        /// @brief This is the keyboard input enum for the function 21 key
        ENUM_DEF(KEYBOARD_FUNCTION_21, VK_F21, 0, 0) 
        
        /// @brief This is the keyboard input enum for the function 22 key
        ENUM_DEF(KEYBOARD_FUNCTION_22, VK_F22, 0, 0) 
        
        /// @brief This is the keyboard input enum for the function 23 key
        ENUM_DEF(KEYBOARD_FUNCTION_23, VK_F23, 0, 0) 
        
        /// @brief This is the keyboard input enum for the function 24 key
        ENUM_DEF(KEYBOARD_FUNCTION_24, VK_F24, 0, 0) 
        
        /// @brief This is the keyboard input enum for the number lock key
        ENUM_DEF(KEYBOARD_NUMLOCK, VK_NUMLOCK, 0, 0) 
        
        /// @brief This is the keyboard input enum for the scroll key
        ENUM_DEF(KEYBOARD_SCROLL, VK_SCROLL, 0, 0) 
        
        /// @brief This is the keyboard input enum for the left shift key
        ENUM_DEF(KEYBOARD_LEFT_SHIFT, VK_LSHIFT, 0, 0) 
        
        /// @brief This is the keyboard input enum for the right shift key
        ENUM_DEF(KEYBOARD_RIGHT_SHIFT, VK_RSHIFT, 0, 0) 
        
        /// @brief This is the keyboard input enum for the left control key
        ENUM_DEF(KEYBOARD_LEFT_CONTROL, VK_LCONTROL, 0, 0) 
        
        /// @brief This is the keyboard input enum for the right control key
        ENUM_DEF(KEYBOARD_RIGHT_CONTROL, VK_RCONTROL, 0, 0) 
        
        /// @brief This is the keyboard input enum for the left menu key
        ENUM_DEF(KEYBOARD_LEFT_MENU, VK_LMENU, 0, 0) 
        
        /// @brief This is the keyboard input enum for the right menu key
        ENUM_DEF(KEYBOARD_RIGHT_MENU, VK_RMENU, 0, 0) 
        
        /// @brief This is the keyboard input enum for the browser back key
        ENUM_DEF(KEYBOARD_BACK, VK_BROWSER_BACK, 0, 0) 
        
        /// @brief This is the keyboard input enum for the browser forward key
        ENUM_DEF(KEYBOARD_FORWARD, VK_BROWSER_FORWARD, 0, 0) 
        
        /// @brief This is the keyboard input enum for the browser refresh key
        ENUM_DEF(KEYBOARD_REFRESH, VK_BROWSER_REFRESH, 0, 0) 
        
        /// @brief This is the keyboard input enum for the browser stop key
        ENUM_DEF(KEYBOARD_STOP, VK_BROWSER_STOP, 0, 0) 
        
        /// @brief This is the keyboard input enum for the browser search key
        ENUM_DEF(KEYBOARD_SEARCH, VK_BROWSER_SEARCH, 0, 0) 
        
        /// @brief This is the keyboard input enum for the browser  key
        ENUM_DEF(KEYBOARD_FAVORITES, VK_BROWSER_FAVORITES, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_HOME_BROWSER, VK_BROWSER_HOME, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_VOLUME_MUTE, VK_VOLUME_MUTE, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_VOLUME_DOWN, VK_VOLUME_DOWN, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_VOLUME_UP, VK_VOLUME_UP, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_NEXT_TRACK, VK_MEDIA_NEXT_TRACK, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_PREVIOUS_TRACK, VK_MEDIA_PREV_TRACK, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_STOP_MEDIA, VK_MEDIA_STOP, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_PLAY_PAUSE, VK_MEDIA_PLAY_PAUSE, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_MAIL, VK_LAUNCH_MAIL, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_SELECT_MEDIA, VK_LAUNCH_MEDIA_SELECT, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_START_APP_1, VK_LAUNCH_APP1, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_START_APP_2, VK_LAUNCH_APP2, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_OEM_COMMA, VK_OEM_COMMA, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_OEM_PLUS, VK_OEM_PLUS, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_OEM_MINUS, VK_OEM_MINUS, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_OEM_PERIOD, VK_OEM_PERIOD, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_OEM_CLEAR, VK_OEM_CLEAR, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_OEM_1, VK_OEM_1, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_OEM_2, VK_OEM_2, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_OEM_3, VK_OEM_3, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_OEM_4, VK_OEM_4, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_OEM_5, VK_OEM_5, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_OEM_6, VK_OEM_6, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_OEM_7, VK_OEM_7, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_OEM_8, VK_OEM_8, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_OEM_102, VK_OEM_102, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_ATTENTION, VK_ATTN, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_PLAY, VK_PLAY, 0, 0) 
        
        /// @brief This is the keyboard input enum for the ______ key
        ENUM_DEF(KEYBOARD_ZOOM, VK_ZOOM, 0, 0) 
    };
    
    enum FloatKeyboardInputs {
        
    };
    
    enum VectorKeyboardInputs {
        
    };

    int GetOSKeyCodeFromInput(BooleanKeyboardInputs input);
    int GetOSKeyCodeFromInput(FloatKeyboardInputs input);
    int GetOSKeyCodeFromInput(VectorKeyboardInputs input);
}

#endif