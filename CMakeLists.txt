cmake_minimum_required(VERSION 3.12)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
# Must be included first before project
#set(PICO_SDK_PATH ${CMAKE_CURRENT_SOURCE_DIR}/pico/lib/pico-sdk)
#include(pico/lib/pico-sdk/external/pico_sdk_import.cmake) # Alt way
include(pico/lib/pico-sdk/pico_sdk_init.cmake) # Original way
# The project - and what we are using
project(tinyspot C CXX ASM)

add_subdirectory(pico)
