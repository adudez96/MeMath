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

template <typename M> void Logger::log(Logger::LogLevel level, const M message) {
    std::cout << "[" << Logger::LOG_LEVEL_MAP[level] << "] " << message << std::endl;
}

template <typename M> void Logger::trace(const M message) {
    this->log(TRACE, message);
}

template <>
void Logger::trace(const char* message) {
    this->trace(std::string(message));
}

template <typename M> void Logger::debug(const M message) {
    this->log(DEBUG, message);
}

template <>
void Logger::debug(const char* message) {
    this->debug(std::string(message));
}

template <typename M> void Logger::info(const M message) {
    this->log(INFO, message);
}

template <>
void Logger::info(const char* message) {
    this->info(std::string(message));
}

template <typename M> void Logger::warn(const M message) {
    this->log(WARN, message);
}

template <>
void Logger::warn(const char* message) {
    this->warn(std::string(message));
}

template <typename M> void Logger::error(const M message) {
    this->log(ERROR, message);
}

template <>
void Logger::error(const char* message) {
    this->error(std::string(message));
}

template <typename M> void Logger::fatal(const M message) {
    this->log(FATAL, message);
}

template <>
void Logger::fatal(const char* message) {
    this->fatal(std::string(message));
}
