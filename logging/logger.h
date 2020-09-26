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
    template <typename M> void log(LogLevel level, const M message);

    /**
     * Log a message at LogLevel::TRACE level
     */
    template <typename M> void trace(const M message);

    /**
     * Log a message at LogLevel::DEBUG level
     */
    template <typename M> void debug(const M message);

    /**
     * Log a message at LogLevel::INFO level
     */
    template <typename M> void info(const M message);

    /**
     * Log a message at LogLevel::WARN level
     */
    template <typename M> void warn(const M message);

    /**
     * Log a message at LogLevel::ERROR level
     */
    template <typename M> void error(const M message);

    /**
     * Log a message at LogLevel::FATAL level
     */
    template <typename M> void fatal(const M message);

};

}

#endif
