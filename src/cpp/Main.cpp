#include "base/Application.h"
#include "logger/Logger.h"

int main () {
    FSE::Logger::startLogger();
    FSE::Logger::enterStart();
    FSE::Logger::nextFrame();
    FSE::Logger::nextFrame();
    FSE::Logger::nextFrame();
    FSE::Logger::enterShutdown();
    FSE::Application::run();
}
