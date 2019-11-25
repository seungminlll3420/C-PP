project(HW3)
cmake_minimum_required(VERSION 3.10)

include_directories(inc)
add_subdirectory(lib)
add_subdirectory(src)

add_dependencies(hw3 printlog square)