#include "base/Application.h"
#include "logger/Logger.h"

int main () {
    FSE::Logging::Logger::startLogger();
    FSE::Logging::Logger::enterStart();
    FSE::Logging::Logger::nextFrame();
    FSE::Logging::Logger::nextFrame();
    FSE::Logging::Logger::nextFrame();
    FSE::Logging::Logger::enterShutdown();
    FSE::Application::run();
}
