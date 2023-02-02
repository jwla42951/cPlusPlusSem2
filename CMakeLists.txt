cmake_minimum_required(VERSION 3.23)
project(excercice2)

set(CMAKE_CXX_STANDARD 23)

add_executable(excercice2 src/main.cpp src/Options.cpp src/Options.h)

set(CMAKE_EXE_LINKER_FLAGS "-static")
