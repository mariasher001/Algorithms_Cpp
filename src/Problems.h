#ifndef PROBLEMS_H
#define PROBLEMS_H
#include <iostream>

class Problems {
public:
	void sumOfNNumbers(int n) {
		int sum;
		if (n > 0) {
			sum = n * (n + 1) / 2;
		} else {
			std::cout << "Invalid input. Please enter a positive integer." << std::endl;
			return;
		}
		std::cout << "Sum of first " << n << " numbers is: " << sum << std::endl;
	}

	void sumOfNNaturalNumbers(int n) {
		int sum = n;
		while (n > 0) {
			sum = sum + (n - 1);
			n--;
		}
		std::cout << "Sum of first " << n << " natural numbers by loop is: " << sum << std::endl;
	}

	//Ptoduct of all the numbers from 1 to n
	void NFactorial(int n) {
		if (n == 1 || n == 0) {
			std::cout << "N Factorial is: 1" << std::endl;
			return;
		}
		if (n < 0) {
			std::cout << "Invalid input. Please enter a non-negative integer." << std::endl;
			return;

		}
		int resultOfFactorial = n;
		while (n>1) {
			resultOfFactorial = resultOfFactorial * (n - 1);
			n--;
		}
		std::cout << "N Factorial is: " << resultOfFactorial << std::endl;
	}

	void sumOfDigitsOfNumber(int num) {
		int sum = 0;
		int digit;

		if(num < 0) {
			num = -num; // Make the number positive if it's negative
		}

		while (num > 0) {
			digit = num % 10;
			sum = sum + digit;
			num = num / 10;
		}
		std::cout << "Sum of digits of the number is: " << sum << std::endl;}


	void printAllPrimeNumbersUptoN(int n) {
		for (int i = 2; i < n; i++) {
			bool isPrime = true;
			for (int j = 2; j < i; j++) {
				if(i%j ==0) {
					isPrime = false;
					break;
				}
			}
			if(isPrime && i>1) {
				std::cout << i << ", ";
			}
		}
		std::cout << std::endl;
	}

	void printAllFibonaaciNumbers(int n) {
		int F1 = 0;
		int F2 = 1;
		int F3 = F1 + F2;
		std::cout << F1 << ", " << F2 << ", " << F3 << ", ";
		for (int i = 3; i < n; i++) {
			F2 = F3;
			F1 = F2;
			F3 = F1 + F2;
			std::cout << F3 << ", ";
		}
		std::cout << std::endl;
	}

	void DecimalToBinaryConverter(int number) {
		int remainder;
		int power = 1;
		int FinalBinary = 0;
		while (number > 0) {
			remainder = number % 2;
			FinalBinary = FinalBinary + remainder * power;
			power = power*10;
			number = number / 2;
		}
		std::cout << "The Binary to Decimal for n " << " is: " << FinalBinary << std::endl;
	}

	void solution() {
		int n = 10;
		int choice;
		while (true) {
			std::cout << std::endl;
			std::cout << "1. Sum of N Numbers" << std::endl;
			std::cout << "2. Sum of N Natural Numbers" << std::endl;
			std::cout << "3. N Factorial" << std::endl;
			std::cout << "4. Sum of Digits of a Number" << std::endl;
			std::cout << "5. Print all Prime Numbers up to N" << std::endl;
			std::cout << "6. Print all Fibonacci Numbers up to N" << std::endl;
			std::cout << "7. Decimal to Binary Converter" << std::endl;
			std::cout << "Please enter your choice: ";
			std::cin >> choice;
			switch (choice) {
				case 1: sumOfNNumbers(n); break;
				case 2: sumOfNNaturalNumbers(n); break;
				case 3: NFactorial(n);break;
				case 4: sumOfDigitsOfNumber(n);break;
				case 5: printAllPrimeNumbersUptoN(n);break;
				case 6: printAllFibonaaciNumbers(n);break;
				case 7: DecimalToBinaryConverter(n);break;
				default: std::cout << "Invalid choice. Please try again." << std::endl;
					break;
			}
		}
	}
};


#endif //PROBLEMS_H
