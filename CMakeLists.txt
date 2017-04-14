cmake_minimum_required(VERSION 3.7)
project(array)

set(CMAKE_C_STANDARD 99)
set(SOURCE_FILES main.c array.c array.h)

add_executable(array ${SOURCE_FILES})