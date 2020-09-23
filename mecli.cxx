#include <iostream>
#include <cstdlib>

#include "logger.h"

int main(int argc, char** argv) {
    mylogger::Logger* logger = new mylogger::Logger();

    logger->info("Hello world!");

    delete logger;

    return EXIT_SUCCESS;
}
