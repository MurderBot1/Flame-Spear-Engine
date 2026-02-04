#include "ui/oswindows/OSWindows.h"

FSE::UI::OSWindows::BaseWindow::BaseWindow(std::shared_ptr<ApplicationConstants> applicationConstants)
        : screenSize(applicationConstants->startingScreenSize) {
}