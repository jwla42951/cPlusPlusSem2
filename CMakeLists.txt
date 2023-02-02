cmake_minimum_required(VERSION 3.23)
project(excercice2)

set(CMAKE_CXX_STANDARD 23)

add_executable(excercice2 source/main.cpp source/Options.cpp source/Options.h)

set(CMAKE_EXE_LINKER_FLAGS "-static")
