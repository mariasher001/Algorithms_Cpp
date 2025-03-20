#ifndef POWEROFANUMBER_H
#define POWEROFANUMBER_H
#include <iomanip>
#include <iostream>
#include <ostream>

class PowerOfANumber {
public:
    static double powerOfANumber(double x, int n) {
        double result = 1;
        if (n == 0) {
           return 1;
        }

        if(n < 0) {
            result = powerOfANumber(x,n*-1);
            return 1/result;

        }
        for (int i = 0; i < n; ++i) {
            result *= x;
        }
        return result;
    }
};

#endif //POWEROFANUMBER_H
