cmake_minimum_required(VERSION 3.30)
project(Codeforces)

set(CMAKE_CXX_STANDARD 26)

# Set output directories
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/bin)

# Use wildcards to include source files
file(GLOB SOURCES
        "main.cpp"
        "Contests/*/*.cpp"
        "*.cpp"
        "ThemeCP/*/*.cpp"
)

# Add executable
add_executable(Codeforces ${SOURCES})
