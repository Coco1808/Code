cmake_minimum_required(VERSION 3.8)

project(practice)
set(CMAKE_C_STANDARD 99)
set(SOURCE_FILES main.c 12.31/odd.h 12.31/odd.c function/function.c function/function.h)
add_executable(practice ${SOURCE_FILES})