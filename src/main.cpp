#include <iostream>

#include "LearningArrays.h"
#include "Vectors.h"

int main() {
    std::vector<int> nums = {90, 90, 8};
    std::cout << "Single Number O(n^2): " << Vectors::singleNumberWithBruteForce(nums) << std::endl;
    return 0;
}
