#include "logger/Logger.h"

#ifdef DEBUG

void FSE::Logger::startLogger() {
    // Get program start time
    programStartTime = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
    
    // Setup file
    std::ostringstream sb;
    sb << "log_" << std::to_string(programStartTime) << ".fselog";
    file.open(sb.str());

    // Setup frame var
    frameCount = 0;
}

void FSE::Logger::enterStart() {
    file << "start:" 
         << "\n    name: " << FSE::Application::getName() 
         << "\n    timestamp (ms): " << 0
         << "\n    data:";
}

void FSE::Logger::nextFrame() {
    // Increment the frame
    frameCount++;

    // put frame data
    file << "\nframe: " << frameCount
         << "\n    timestamp (ms): " << std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - programStartTime
         << "\n    data:";
}

void FSE::Logger::enterShutdown() {
    // end data
    file << "\nshutdown:"
         << "\n    timestamp (ms): " << std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::now().time_since_epoch()).count() - programStartTime
         << "\n    frames ran: " << frameCount;

    // save the file
    file.close();
}

void FSE::Logger::addData(const std::string& name, const std::string& data) {
    (void) name;
    (void) data;
}

void FSE::Logger::addHeaderData(const std::string& name, const std::string& data) {
    (void) name;
    (void) data;
}

#else

void FSE::Logger::startLogger() {

}

void FSE::Logger::enterStart() {

}

void FSE::Logger::nextFrame() {

}

void FSE::Logger::enterShutdown() {

}

void FSE::Logger::addData(const std::string& name, const std::string& data) {

}

void FSE::Logger::addHeaderData(const std::string& name, const std::string& data) {

}

#endif