cmake_minimum_requaered(VERSION 3.20)

set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)
add_executable(computer main.cpp ${MY_INCLUDE_DIR}/ram.cpp ram.h kbd.cpp kbd.h gpu.cpp gpu.h cpu.cpp cpu.h disk.cpp disk.h)
target_include_directories (Simulator PUBLIC ${MY_INCLUDE_DIR})