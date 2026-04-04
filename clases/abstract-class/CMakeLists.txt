cmake_minimum_required(VERSION 4.1)
project(abstract_class)

set(CMAKE_CXX_STANDARD 20)

add_executable(abstract_class main.cpp
        LivingOrganism.cpp
        LivingOrganism.h
        Herbivorous.cpp
        Herbivorous.h
        Cow.cpp
        Cow.h
)
