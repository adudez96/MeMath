cmake_minimum_required(VERSION 3.17.2)

# set the project name and version
project(MathEngine VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# add my libraries
add_subdirectory(logging)
list(APPEND EXTRA_LIBS logger)
list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/logging")
add_subdirectory(memath)
list(APPEND EXTRA_LIBS vector3)
list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/memath")

# add the executable
add_executable(mecli mecli.cxx)

# link library files
target_link_libraries(mecli PUBLIC ${EXTRA_LIBS})

# add the binary tree to the search path for include files
# so that we will find the library .h files
target_include_directories(
    mecli PUBLIC
    "${PROJECT_BINARY_DIR}"
    ${EXTRA_INCLUDES}
)
