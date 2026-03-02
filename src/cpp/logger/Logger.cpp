#include "logger/Logger.h"

#ifdef DEBUG

namespace FSE::Logging {
void Logger::startLogger() {
  // Get program start time
  programStartTime = std::chrono::duration_cast<std::chrono::microseconds>(
                         std::chrono::system_clock::now().time_since_epoch())
                         .count();

  // Make sure log folder exists
  if (std::filesystem::exists(Constants::CompileTime::LOG_FOLDER_PATH))
    std::filesystem::create_directories(
        Constants::CompileTime::LOG_FOLDER_PATH);
  if (std::filesystem::exists(Constants::CompileTime::LOG_FOLDER_PATH))
    std::cout << "created log folder";
  else
    std::cout << "failed to create log folder";

  // Setup file
  file.open(Constants::Runtime::LOG_PATH);

  // Setup frame var
  frameCount = 0;
}

void Logger::enterStart() {
  file << "start:" << "\n    name: " << FSE::Application::getName()
       << "\n    timestamp (ms): " << 0 << "\n    data:";
}

void Logger::nextFrame() {
  // Increment the frame
  frameCount++;

  // put frame data
  file << "\nframe: " << frameCount << "\n    timestamp (ms): "
       << std::chrono::duration_cast<std::chrono::microseconds>(
              std::chrono::system_clock::now().time_since_epoch())
                  .count() -
              programStartTime
       << "\n    data:";
}

void Logger::enterShutdown() {
  // end data
  file << "\nshutdown:" << "\n    timestamp (ms): "
       << std::chrono::duration_cast<std::chrono::microseconds>(
              std::chrono::system_clock::now().time_since_epoch())
                  .count() -
              programStartTime
       << "\n    frames ran: " << frameCount;

  // save the file
  file.close();
}

void Logger::addData(const std::string &name, const std::string &data) {
  (void)name;
  (void)data;
}

void Logger::addHeaderData(const std::string &name, const std::string &data) {
  (void)name;
  (void)data;
}

} // namespace FSE::Logging

#else

namespace FSE::Logging {
void Logger::startLogger() {}

void Logger::enterStart() {}

void Logger::nextFrame() {}

void Logger::enterShutdown() {}

void Logger::addData(const std::string &name, const std::string &data) {}

void Logger::addHeaderData(const std::string &name, const std::string &data) {}

} // namespace FSE::Logging
#endif