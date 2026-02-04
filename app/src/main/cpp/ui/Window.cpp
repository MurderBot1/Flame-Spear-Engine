#include "ui/Window.h"

FSE::UI::Window::Window(std::shared_ptr<ApplicationConstants> applicationConstants)
    #if defined(_WIN32) || defined(_WIN64)
        : WindowsWindow(applicationConstants) {
    #elif defined(__linux__)
        : LinuxWindow(applicationConstants) {
    #elif defined(__APPLE__)
        : MacWindow(applicationConstants) {
    #endif
}
