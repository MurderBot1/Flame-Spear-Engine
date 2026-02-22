#include "ui/Window.h"

FSE::UI::Window::Window()
    #if defined(_WIN32) || defined(_WIN64)
        : WindowsWindow() {
    #elif defined(__linux__)
        : LinuxWindow() {
    #elif defined(__APPLE__)
        : MacWindow() {
    #endif
}
