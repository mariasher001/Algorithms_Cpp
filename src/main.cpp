#include <iostream>

#include "LearningArrays.h"

int main() {
    int arr[] = {1,2,3,4,5,90};
    int size = sizeof(arr) / sizeof(int);
    LearningArrays::reverseArray(arr,size);
    return 0;
}
