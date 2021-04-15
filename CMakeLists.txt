cmake_minimum_required(VERSION 3.19)

project(cpp_calculator VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 14)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/build)

add_executable(cppcalc
        main.cpp
        src/calc.cpp
        src/calc.hpp
)