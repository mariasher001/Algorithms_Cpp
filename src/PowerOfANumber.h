#ifndef POWEROFANUMBER_H
#define POWEROFANUMBER_H
#include <iomanip>
#include <iostream>
#include <ostream>

//LeetCode 50: Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

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

    static double powerOfANumberWithRecursion(double x, int n) {
        if(n==0) {
            return 1;
        }
        if(n<0) {
            n *= -1;
            double R = x * powerOfANumberWithRecursion(x,n-1);
            return 1/R;
        }
        return x * powerOfANumberWithRecursion(x,n-1);
    }
};

#endif //POWEROFANUMBER_H
