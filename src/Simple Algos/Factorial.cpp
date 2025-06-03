#include "Factorial.h"

int Factorial::n_Factorial(int n) {
    int resultOfFactorial = 1;
    for (int i = 1; i <= n; ++i) {
        resultOfFactorial = resultOfFactorial * i;
    }
    return resultOfFactorial;
}

int Factorial::n_Factorial_Reverse(int n) {
    int resultOfFactorialReverse = n;
    for (int i = n; i > 1; i--, n--) {
        resultOfFactorialReverse = resultOfFactorialReverse * (n - 1);
    }
    return resultOfFactorialReverse;
}
