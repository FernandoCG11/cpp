cmake_minimum_required(VERSION 4.1)
project(get_and_set)

set(CMAKE_CXX_STANDARD 20)

add_executable(get_and_set main.cpp
        Animal.cpp
        Animal.h)
