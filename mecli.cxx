#include <iostream>
#include <cstdlib>
#include <string>

#include "logger.h"
#include "vector3.h"

int main(int argc, char** argv) {
    mylogger::Logger* logger = new mylogger::Logger();

    logger->info("2Hello world!");
    logger->warn("3Hello world!");
    auto vec1 = memath::Vector3(1,2,3);
    std::cout << vec1 << std::endl;

    delete logger;

    return EXIT_SUCCESS;
}
