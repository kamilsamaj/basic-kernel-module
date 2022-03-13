cmake_minimum_required(VERSION 3.21)
project(basic_kernel_module C)

set(CMAKE_C_STANDARD 99)

add_executable(basic_kernel_module main.c)
include_directories(/usr/src/linux-headers-5.15.0-22/include)
