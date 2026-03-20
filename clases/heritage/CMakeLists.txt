cmake_minimum_required(VERSION 4.1)
project(heritage)

set(CMAKE_CXX_STANDARD 20)

add_executable(heritage main.cpp
        Shape.cpp
        Shape.h
        Shape.cpp
        Triangle.cpp
        Triangle.h)
