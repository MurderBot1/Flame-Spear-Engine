#ifndef OSWindows_H
#define OSWindows_H

#include "helpers/Helpers.h"

#include <memory>
#include <vector>

namespace FSE::UI::OSWindows {
    class BaseWindow {
        public: // Constructor
            BaseWindow();
        public: // Getter / Setters
            Helpers::Screen::ScreenSize getScreenSize() { return screenSize; }
        public:
            virtual void updateBufferSize() = 0;
            virtual void setPixel(int rgba, int index) = 0;
            virtual void setPixels(std::vector<int> newPixels) = 0;
            virtual void display() = 0;
        private:
            Helpers::Screen::ScreenSize screenSize;
    };
}

#endif