//
// Created by msher on 10/17/2025.
//

#include "PrimeOrNot.h"

#include <complex>
#include <iostream>

void PrimeOrNot::IsPrimeOrNot(int number) {
	bool isPrime = false;
	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			isPrime = true;
			break;
		}
	}
	if (isPrime) {
		std::cout << number << " is not a prime number." << std::endl;
	} else {
		std::cout << number << " is a prime number." << std::endl;
	}
}

/*f a number n has a divisor larger than sqrt(n), the corresponding smaller divisor would have already been found earlier.
So, we only need to test divisors up to sqrt(number)
*/
void PrimeOrNot::IsPrimeOrNotOptimized(int n) {
	for (int i = 2; i <= std::sqrt(n); i++) {
		if (n % i == 0) {
			std::cout << n << " is not a prime number." << std::endl;
			return;
		}
	}
	std::cout << n << " is a prime number." << std::endl;
}
