cmake_minimum_required(VERSION 3.0.0)
project(cas VERSION 0.1.0 LANGUAGES C)

# Set source and include directories
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Add header files directory to include path
include_directories(${INCLUDE_DIR})

# Add all source files from src/ directory
file(GLOB SOURCES "${SRC_DIR}/*.c")

# Add executable
add_executable(cas ${SOURCES})

# Optionally, you can specify a specific source file like so:
# add_executable(cas ${SRC_DIR}/main.c)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
