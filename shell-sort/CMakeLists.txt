cmake_minimum_required(VERSION 4.1)
project(shell_sort)

set(CMAKE_CXX_STANDARD 20)


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(MSVC)
    add_compile_options(/W4 /permissive-)
else()
    add_compile_options(-Wall -Wextra -pedantic -Wvla -Werror=vla)
endif()

add_executable(shell_sort main.cpp)
