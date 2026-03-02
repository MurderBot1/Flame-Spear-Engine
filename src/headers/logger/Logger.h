#ifndef Logger_H
#define Logger_H

#include "base/Application.h"
#include "logger/LoggerConstants.h"

#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

namespace FSE::Logging {
class Logger {
public:
  static void startLogger();
  static void enterStart();
  static void nextFrame();
  static void enterShutdown();
  static void addData(const std::string &name, const std::string &data);
  static void addHeaderData(const std::string &name, const std::string &data);

private:
  static inline std::ofstream file;
  static inline int frameCount;
  static inline uint64_t programStartTime;
};
} // namespace FSE::Logging

#endif