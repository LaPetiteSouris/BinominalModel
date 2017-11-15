cmake_minimum_required(VERSION 3.8)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../bin")
set(SOURCE_FILES src/main.cpp include/solver.h include/solver.cpp)
add_executable(main ${SOURCE_FILES})
