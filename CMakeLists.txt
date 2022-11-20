cmake_minimum_required(VERSION 3.15.3)
project(bootgen VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

MESSAGE(STATUS "operation system is ${CMAKE_SYSTEM}")

set(CMAKE_BUILD_TYPE RELEASE)
set(CMAKE_C_FLAGS "-O0 -ggdb -Wall")
set(CMAKE_C_FLAGS_DEBUG "-O0 -ggdb -Wall")
set(CMAKE_C_FLAGS_RELEASE "-O0 -ggdb -Wall")
set(CMAKE_CXX_FLAGS "-std=c++0x -O -Wall -Wno-reorder -Wno-deprecated-declarations")
set(CMAKE_CXX_FLAGS_DEBUG "-O0 -ggdb -std=c++0x -O -Wall -Wno-reorder -Wno-deprecated-declarations")
set(CMAKE_CXX_FLAGS_RELEASE "-O0 -ggdb -std=c++0x -O -Wall -Wno-reorder -Wno-deprecated-declarations")

# Set the host paths
SET(MAIN_DIR ./src)
file(GLOB_RECURSE SRC_CPP "${MAIN_DIR}/*.cpp")
file(GLOB_RECURSE SRC_C "${MAIN_DIR}/*.c")
SET(SRC_ALL ${SRC_CPP}
            ${SRC_C})


# Set INCLUDE
SET(INC_MAIN ./inc)
include_directories(${INC_MAIN})

add_executable("${PROJECT_NAME}" ${SRC_ALL})
target_link_libraries("${PROJECT_NAME}" "-lssl -lcrypto")