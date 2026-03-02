cmake_minimum_required(VERSION 4.1)
project(practice_1)

set(CMAKE_CXX_STANDARD 20)

add_executable(practice_1 main.cpp
        cmake-build-debug/Person.cpp
        cmake-build-debug/Person.h)
