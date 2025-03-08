//
// Created by msher on 3/8/2025.
//

#include "LearningArrays.h"
#include <iostream>

void LearningArrays::sumOfArray(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    std::cout << "Sum of the array is: " << sum << std::endl;
}

void LearningArrays::productOfArray(int *arr, int size) {
    int productOfArray = 1;
    for (int i = 0; i < size; ++i) {
        productOfArray = productOfArray * arr[i];
    }
}

void LearningArrays::swappingMinMaxInArray(int *arr, int size) {
    //finding the minimum and maximum element in the array
    int min = 0;
    int max = 0;
    int temp = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < arr[min]) {
            min = i;
        }
        if (arr[i] > arr[max]) {
            max = i;
        }
    }

    temp=arr[max];
    arr[max] = arr[min];
    arr[min] = temp;

    std::cout<<"Array after swapping the minimum and maximum element is: "<<std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout<<arr[i]<<" "<<std::endl;
    }
}

void LearningArrays::uniqueElementsInArray(int *arr, int size) {
}

void LearningArrays::reverseArray(int *arr, int size) {
}

void LearningArrays::intersectionOfArrays(int *arr1, int *arr2, int size1, int size2) {
}
