cmake_minimum_required(VERSION 3.8)
project(BinomialPricer)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory (binomial)
add_subdirectory (solver)
add_subdirectory (test)