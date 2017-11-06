cmake_minimum_required(VERSION 3.8)
project(BinomialPricer)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES src/main.cpp include/BinomialModel.h include/EuropeanModel.h src/BinomialModel.cpp src/EuropeanModel.cpp)
add_executable(BinomialPricer ${SOURCE_FILES})