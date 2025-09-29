cmake_minimum_required(VERSION 3.30)
project(Codeforces)

set(CMAKE_CXX_STANDARD 26)

# Use wildcards to include source files
file(GLOB SOURCES
        "main.cpp"
)

add_compile_options(
        -O0 -g -Wno-unused-result -DONLINEJUDGE
)

# Add executable
add_executable(Codeforces ${SOURCES}
        "Practice/A. LCM Problem.cpp")
