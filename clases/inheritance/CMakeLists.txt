cmake_minimum_required(VERSION 4.1)
project(inheritance)

set(CMAKE_CXX_STANDARD 20)

add_executable(inheritance main.cpp
        Animal.cpp
        Animal.h)
