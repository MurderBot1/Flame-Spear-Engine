#include "ui/oswindows/OSWindows.h"

FlameSpearEngine::UI::OSWindows::BaseWindow::BaseWindow(std::shared_ptr<ApplicationConstants> applicationConstants)
        : screenSize(applicationConstants->startingScreenSize) {
}