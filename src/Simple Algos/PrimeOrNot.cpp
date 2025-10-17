//
// Created by msher on 10/17/2025.
//

#include "PrimeOrNot.h"

#include <iostream>

void PrimeOrNot::IsPrimeOrNot(int number) {
	bool isPrime = false;
	for (int i = 2; i < number ; i++) {
		if(number%i == 0) {
			isPrime = true;
			break;
		}
	}
	if(isPrime) {
		std::cout << number << " is not a prime number." << std::endl;
	} else {
		std::cout << number << " is a prime number." << std::endl;
	}
}
