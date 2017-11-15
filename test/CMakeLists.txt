cmake_minimum_required(VERSION 3.8)

##################################
# Download and install GoogleTest

include(ExternalProject)
ExternalProject_Add(gtest
        URL https://github.com/google/googletest/archive/release-1.7.0.zip
        # Comment above line, and uncomment line below to use subversion.
        # SVN_REPOSITORY http://googletest.googlecode.com/svn/trunk/
        # Uncomment line below to freeze a revision (here the one for 1.7.0)
        # SVN_REVISION -r700
        CMAKE_ARGS DBUILD_SHARED_LIBS=ON
        PREFIX ${CMAKE_CURRENT_BINARY_DIR}/gtest
        INSTALL_COMMAND ""
        )
ExternalProject_Get_Property(gtest source_dir binary_dir)


find_package(Threads REQUIRED)
set(PThreadLib -pthread)
################
# Define a test
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../bin")
set(MAIN_SOURCE_FILES ../binomial/include/BinomialModel.h ../binomial/include/EuropeanModel.h ../binomial/src/BinomialModel.cpp ../binomial/src/EuropeanModel.cpp)
add_executable(maintest test_call_option.cpp ${MAIN_SOURCE_FILES})

######################################
# Configure the test to use GoogleTest
#
# If used often, could be made a macro.

add_dependencies(maintest gtest)
include_directories(${source_dir}/include)
target_link_libraries(maintest ${binary_dir}/libgtest.a)
target_link_libraries(maintest ${binary_dir}/libgtest_main.a)
target_link_libraries(maintest pthread)

##################################
# Just make the test runnable with
#   $ make test

enable_testing()

add_test(NAME maintest
        COMMAND maintest)
