cmake_minimum_required(VERSION 3.10)

project(dev)

add_subdirectory(src)

add_executable(dev
${CMAKE_SOURCE_DIR}/src)
