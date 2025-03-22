#include <iostream>

#include "LearningArrays.h"
#include "PowerOfANumber.h"
#include "Vectors.h"

int main() {
    //const double R = PowerOfANumber::powerOfANumber(2.000, -2);
    //const double R1 = PowerOfANumber::powerOfANumber(2.000, -2);
    const double R2 = PowerOfANumber::powerOfNumberWithBinaryExponentiation(2.000, 3);

    std::cout << "result is: " << R2 << std::endl;
    return 0;
}
