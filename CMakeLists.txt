
cmake_minimum_required(VERSION 3.23)
#project(laba_5)
project(
        laba_5
        VERSION 1.0
        #    DESCRIPTION "C++ Year 2022 Lab2"
        LANGUAGES CXX
)
set(CMAKE_CXX_STANDARD 17)

#add_executable(laba_5 main.cpp)
add_subdirectory(bin)
add_subdirectory(lib)
enable_testing()
add_subdirectory(gtest)