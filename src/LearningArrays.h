#ifndef LEARNINGARRAYS_H
#define LEARNINGARRAYS_H
#include <vector>

class LearningArrays {
public:
    void sumOfArray(int *arr,int size);
    void static productOfArray(int *arr,int size);
    void static swappingMinMaxInArray(int *arr,int size);
    void static uniqueElementsInUnsortedArray(int *arr,int size);
    void static uniqueElementInSortedArray(int* arr,int size);
    void static reverseArray(int *arr,int size);
    std::vector<int> static intersectionOfArrays(int *arr1,int *arr2,int size1,int size2);


};
#endif //LEARNINGARRAYS_H
