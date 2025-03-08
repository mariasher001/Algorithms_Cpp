//
// Created by msher on 3/8/2025.
//

#include "LearningArrays.h"
#include <iostream>

void LearningArrays::sumOfArray(int* arr, int size) {
    int sum=0;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    std::cout << "Sum of the array is: " << sum << std::endl;
}

void LearningArrays::productOfArray(int* arr, int size) {
    int productOfArray = 1;
    for (int i = 0; i < size; ++i) {
        productOfArray= productOfArray * arr[i];
    }
}

void LearningArrays::swappingMinMaxInArray(int *arr, int size) {

}

void LearningArrays::uniqueElementsInArray(int *arr, int size) {
}

void LearningArrays::reverseArray(int *arr, int size) {
}

void LearningArrays::intersectionOfArrays(int *arr1, int *arr2, int size1, int size2) {
}
