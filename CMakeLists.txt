cmake_minimum_required(VERSION 3.21)
project(basic_kernel_module C)

set(CMAKE_C_STANDARD 99)
set(KERNEL_VERSION 5.15.0-22)
#execute_process(COMMAND uname -r | sed 's/-generic//' OUTPUT_VARIABLE KERNEL_VERSION)

add_executable(basic_kernel_module basic_kernel_module.c)
include_directories(/usr/src/linux-headers-${KERNEL_VERSION}/include)
