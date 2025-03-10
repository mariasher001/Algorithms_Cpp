#include <iostream>

#include "LearningArrays.h"

int main() {
    int arr1[] = {1,1,2,3,4};
    int arr2[]={1,2,5,7};
    int size1 = sizeof(arr1) / sizeof(int);
    int size2 = sizeof(arr2) / sizeof(int);
std::vector<int>result;
    result = LearningArrays::intersectionOfArrays(arr1,arr2,size1,size2);
    for (auto arr3: result) {
        std::cout << arr3 <<std::endl;
    }
    return 0;
}
