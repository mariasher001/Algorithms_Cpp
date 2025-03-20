#include <iostream>

#include "LearningArrays.h"
#include "PowerOfANumber.h"
#include "Vectors.h"

int main() {
    const double R = PowerOfANumber::powerOfANumber(2.000, -2);
    const double R1 = PowerOfANumber::powerOfANumberWithRecursion(2.000, -2);

    std::cout << "result is: " << R1 << std::endl;
    return 0;
}
