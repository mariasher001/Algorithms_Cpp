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
    void static maximumSubarrayBruteForce(int *arr, int arr_size);
    int static maxSubArrayKadaneAlgorithm(int *arr,int arr_size);
};
#endif //LEARNINGARRAYS_H
