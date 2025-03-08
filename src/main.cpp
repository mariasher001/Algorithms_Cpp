#include <iostream>

#include "LearningArrays.h"

int main() {
    LearningArrays learningArrays;
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    learningArrays.sumOfArray(arr, size);
    learningArrays.productOfArray(arr, size);







    return 0;
}
