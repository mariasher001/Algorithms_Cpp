cmake_minimum_required(VERSION 3.29)
project(DSA_Prep)

set(CMAKE_CXX_STANDARD 20)

add_executable(DSA_Prep src/main.cpp
        src/LearningArrays.cpp
        src/LearningArrays.h
        src/Vectors.cpp
        src/Vectors.h
        src/PowerOfANumber.h)
