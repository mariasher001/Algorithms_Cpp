#include <iostream>

#include "LearningArrays.h"

int main() {
    int arr[] = {1,1,2,2,3,3,4,4,5};
    int size = sizeof(arr) / sizeof(int);
    LearningArrays::uniqueElementInSortedArray(arr, size);
    return 0;
}
