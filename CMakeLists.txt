cmake_minimum_required(VERSION 3.17.2)

# set the project name and version
project(MathEngine VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add the executable
add_executable(mecli mecli.cxx)
