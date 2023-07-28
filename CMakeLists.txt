cmake_minimum_required(VERSION 3.25)

project(superz-code-cpp VERSION 0.0.1 LANGUAGES C CXX)

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(demo src/demo.c)