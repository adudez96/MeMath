#include <iostream>
#include <map>
#include <string>

#include "logger.h"

using namespace mylogger;

std::map<const Logger::LogLevel, std::string> Logger::LOG_LEVEL_MAP;

std::map<const Logger::LogLevel, std::string> Logger::create_LOG_LEVEL_MAP() {
    std::map<const Logger::LogLevel, std::string> m;
    m[Logger::TRACE] = std::string("TRACE");
    m[Logger::DEBUG] = std::string("DEBUG");
    m[Logger::INFO] = std::string("INFO");
    m[Logger::WARN] = std::string("WARN");
    m[Logger::ERROR] = std::string("ERROR");
    m[Logger::FATAL] = std::string("FATAL");
    return m;
}

Logger::Logger(Logger::LogLevel level) {
    this->m_logLevel = level;
    Logger::LOG_LEVEL_MAP = Logger::create_LOG_LEVEL_MAP();
}

Logger::Logger() : Logger::Logger(Logger::LogLevel::INFO) {}

void Logger::setLevel(Logger::LogLevel level) {
    this->m_logLevel = level;
}

void Logger::log(Logger::LogLevel level, const char* message) {
    std::cout << "[" << Logger::LOG_LEVEL_MAP[level] << "] " << message << std::endl;
}

void Logger::trace(const char* message) {
    this->log(TRACE, message);
}

void Logger::debug(const char* message) {
    this->log(DEBUG, message);
}

void Logger::info(const char* message) {
    this->log(INFO, message);
}

void Logger::warn(const char* message) {
    this->log(WARN, message);
}

void Logger::error(const char* message) {
    this->log(ERROR, message);
}

void Logger::fatal(const char* message) {
    this->log(FATAL, message);
}
