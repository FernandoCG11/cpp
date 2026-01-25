cmake_minimum_required(VERSION 4.1)
project(square)

set(CMAKE_CXX_STANDARD 20)

add_executable(square main.cpp
        square.cpp
        square.h)
