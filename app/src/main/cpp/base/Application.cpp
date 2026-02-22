#include "base/Application.h"

#include <iostream>
#include <chrono>
#include <thread>

namespace FSE {

    void Application::run() {
        int i = 0;
        while (i < 5) {
            std::cout << "running\n";
            std::this_thread::sleep_for(std::chrono::milliseconds(500));
            i++;
        }
    }

    void FSE::Application::setName(const std::string &name) {
        appName = name;
    }

    void FSE::Application::setStartingScreenSize(Helpers::Screen::ScreenSize size) {
        startingScreenSize = size;
    }

    void FSE::Application::setStartingScreenSize(int x, int y) {
        startingScreenSize = Helpers::Screen::ScreenSize(x, y);
    }
}
