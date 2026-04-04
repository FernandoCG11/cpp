cmake_minimum_required(VERSION 4.1)
project(polymorphism)

set(CMAKE_CXX_STANDARD 20)

add_executable(polymorphism main.cpp
        Poligon.cpp
        Poligon.h
        Triangle.cpp
        Triangle.h)
