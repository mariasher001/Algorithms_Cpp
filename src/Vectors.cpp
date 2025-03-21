//
// Created by msher on 3/13/2025.
//

#include "Vectors.h"

int Vectors::singleNumberWithBruteForce(std::vector<int> &nums) {
    if (nums.size() == 1) {
        return nums.at(0);
    }
    if (nums.size() % 2 == 0) {
        return -1;
    }

    for (int i = 0; i < nums.size(); ++i) {
        int counter = 0;
        for (int j = 0; j < nums.size(); ++j) {
            if (nums.at(i) == nums.at(j)) {
                counter++;
            }
        }
        if (counter == 1) {
            return nums.at(i);
        }
    }
    return -1;
}

int Vectors::singleNumberWithXOROperation(std::vector<int> &nums) {
    int result=0;
    for (auto num: nums) {
        result=result^num;
    }
    return result;
}

//Time Complexity = O(n^2)
std::vector<int> Vectors::intersectionOfArrays(int *arr1, int *arr2, int size1, int size2) {

    std::vector<int>result;

    for (int i = 0; i < size1; ++i) {
        for (int j = 0; j < size2; ++j) {
            if(arr1[i]==arr2[j]) {
                result.emplace_back(arr1[i]);
                break;
            }
        }
    }
    return result;
}
