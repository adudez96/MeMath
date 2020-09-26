#include <iostream>
#include <cstdlib>
#include <string>

#include "logger.h"

int main(int argc, char** argv) {
    mylogger::Logger* logger = new mylogger::Logger();

    // logger->info(std::string("Hello world!"));
    logger->info("2Hello world!");
    logger->warn("3Hello world!");

    delete logger;

    return EXIT_SUCCESS;
}
