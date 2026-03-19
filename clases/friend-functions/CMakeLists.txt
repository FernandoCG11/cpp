cmake_minimum_required(VERSION 4.1)
project(friend_functions)

set(CMAKE_CXX_STANDARD 20)

add_executable(friend_functions main.cpp
        Dog.cpp
        Dog.h)
