#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <map>

namespace mylogger {

class Logger {

public:
    /**
     * Log levels
     */
    enum LogLevel {
        TRACE = 0,
        DEBUG,
        INFO,
        WARN,
        ERROR,
        FATAL,
        OFF
    };

protected:
    LogLevel m_logLevel = INFO;
    static std::map<const LogLevel, std::string> create_LOG_LEVEL_MAP();
    static std::map<const LogLevel, std::string> LOG_LEVEL_MAP;

public:

    /**
     * Constructor, given initial level
     */
    Logger(LogLevel level);

    /**
     * Default constructor
     */
    Logger();

    /**
     * Set the logger level
     */
    void setLevel(LogLevel level);

    /**
     * Log a message
     */
    void log(LogLevel level, const char* message);

    /**
     * Log a message at LogLevel::TRACE level
     */
    void trace(const char* message);

    /**
     * Log a message at LogLevel::DEBUG level
     */
    void debug(const char* message);

    /**
     * Log a message at LogLevel::INFO level
     */
    void info(const char* message);

    /**
     * Log a message at LogLevel::WARN level
     */
    void warn(const char* message);

    /**
     * Log a message at LogLevel::ERROR level
     */
    void error(const char* message);

    /**
     * Log a message at LogLevel::FATAL level
     */
    void fatal(const char* message);

};

}

#endif
