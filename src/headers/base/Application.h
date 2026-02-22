#ifndef Application_H
#define Application_H

#include <string>

#include "ui/Window.h"

namespace FSE {
    class Application {
        public:
            static void run();
        public:
            static void setName(const std::string& name);
            static void setStartingScreenSize(Helpers::Screen::ScreenSize name);
            static void setStartingScreenSize(int x, int y);
        private:
            static inline UI::Window displayWindow;
            static inline std::string appName;
            static inline Helpers::Screen::ScreenSize startingScreenSize;
    };
}

#endif