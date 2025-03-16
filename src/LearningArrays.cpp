//
// Created by msher on 3/8/2025.
//

#include "LearningArrays.h"
#include <iostream>
#include <vector>

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

    temp = arr[max];
    arr[max] = arr[min];
    arr[min] = temp;

    std::cout << "Array after swapping the minimum and maximum element is: " << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " " << std::endl;
    }
}

void LearningArrays::uniqueElementsInUnsortedArray(int *arr, int arraySize) {
    for (int i = 0; i < arraySize; ++i) {
        int counter = -1;
        for (int j = 0; j < arraySize; ++j) {
            if (arr[i] == arr[j])
                counter++;
        }
        if (counter == 0) {
            std::cout << "unique element found at index " << i << " : " << arr[i] << std::endl;
        }
    }
}

void LearningArrays::uniqueElementInSortedArray(int *arr, int size) {
    //Here the array is sorted.
    //Approach:: non - unique element - have a corresponding similar element by its side either at +1 or -1 position + they be in perfect pairs for this question.

    int left = 0;
    int right = size - 1;

    if (arr[left] != arr[left + 1]) {
        std::cout << arr[left] << std::endl;
        return;
    }

    if (arr[right] != arr[right - 1]) {
        std::cout << arr[right] << std::endl;
        return;
    }


    while (left < right) {
        int mid = left + right / 2;

        if (arr[mid - 1] != arr[mid] && arr[mid] != arr[mid + 1]) {
            break;
        }

        if (arr[mid] == arr[mid + 1]) {
            if ((right - (mid + 1)) % 2 != 0) {
                left = mid + 2;
            } else {
                right = mid - 1;
            }
        } else if (arr[mid - 1] == arr[mid]) {
            if ((arr[mid - 1] - left) % 2 != 0) {
                right = mid - 2;
            } else {
                left = mid + 1;
            }
        }
    }
    std::cout << "unique element is: " << arr[(left + right) / 2] << std::endl;
}

void LearningArrays::reverseArray(int *arr, int size) {
    int mid = size / 2;
    int temp = 0;
    for (int i = 0; i < mid; i++) {
        temp = arr[size - i - 1];
        arr[size - i - 1] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << std::endl;
    }
}

void LearningArrays::maximumSubarrayBruteForce(int *arr, int arr_size) {
    int max = 0;
    int sum;

    for (int i = 0; i < arr_size; ++i) {
        for (int j = i; j < arr_size; ++j) {
            sum = 0;
            for (int k = i; k <= j; ++k) {
                std::cout << arr[k];
                sum = sum + arr[k];
                if (sum > max) {
                    max = sum;
                }
            }
            std::cout << " ";
        }
        std::cout << ": " << sum << std::endl;
    }
    std::cout << "Sum of the max subarray is : " << max << std::endl;
}
