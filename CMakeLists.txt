cmake_minimum_required(VERSION 3.29)
project(DSA_Prep)

set(CMAKE_CXX_STANDARD 20)

add_executable(DSA_Prep main.cpp
        src/LearningArrays.cpp
        src/LearningArrays.h
        src/Vectors.cpp
        src/Vectors.h
        src/PowerOfANumber.h
        "src/Simple Algos/Factorial.cpp"
        "src/Simple Algos/Factorial.h"
        "src/Simple Algos/PrimeOrNot.cpp"
        "src/Simple Algos/PrimeOrNot.h"
        "src/Simple Algos/Calculator.cpp"
        "src/Simple Algos/Calculator.h"
        src/Patterns/SquareNumberPattern.cpp
        src/Patterns/SquareNumberPattern.h
        src/Problems.h)
