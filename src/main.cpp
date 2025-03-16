#include <iostream>

#include "LearningArrays.h"
#include "Vectors.h"

int main() {
    int arr[]={1,2,3,4,5};
    int arr_size = sizeof(arr)/sizeof(int);
    LearningArrays::maximumSubarrayBruteForce(arr,arr_size);
    return 0;
}
