cmake_minimum_required(VERSION 4.1)
project(inheritance_classes)

set(CMAKE_CXX_STANDARD 20)

add_executable(inheritance_classes main.cpp
        Vehicle.cpp
        Vehicle.h
        Turism.cpp
        Turism.h)
