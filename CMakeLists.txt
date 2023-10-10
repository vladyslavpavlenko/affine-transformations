cmake_minimum_required(VERSION 3.10)
project(1lab)

set(CMAKE_CXX_STANDARD 11)

add_executable(1lab main.cpp affine_transformation.h affine_transformation.cpp)


configure_file(input.txt input.txt COPYONLY)
