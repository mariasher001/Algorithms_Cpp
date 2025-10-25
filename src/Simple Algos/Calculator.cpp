//
// Created by msher on 10/17/2025.
//

#include "Calculator.h"

#include <iostream>

#include "PrimeOrNot.h"

void Calculator::calculatorScreen() {
	while (!isExitFlagTrue) {
		std::cout << "Welcome to the calculator application!" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		std::cout << "Please select what operation you want to perform:" << std::endl;
		std::cout << "1. Addition" << std::endl;
		std::cout << "2. Subtraction" << std::endl;
		std::cout << "3. Multiplication" << std::endl;
		std::cout << "4. Division" << std::endl;
		std::cout << "5. Modulus" << std::endl;
		std::cout << "6. Check if a number is even or odd" << std::endl;
		std::cout << "7. Check if a number is prime or not" << std::endl;
		std::cout << "Please enter 0 to exit the application." << std::endl;

		std::cin >> mOperation;

		if (mOperation == 0) {
			std::cout << "Exiting the application. Goodbye!" << std::endl;
			isExitFlagTrue = false;
			exit(0);
		}
		if (mOperation < 1 || mOperation > 7) {
			std::cout << "Invalid operation selected. Please try again." << std::endl;
			calculatorScreen();
		} else {
			std::cout << "Please enter number 1" << std::endl;
			std::cin >> mNum1;

			std::cout << "Please enter number 2" << std::endl;
			std::cin >> mNum2;
			CalcOperations(mOperation, mNum1, mNum2);
		}
	}
}

void Calculator::CalcOperations(int operation, int num1, int num2) {
	//code to perform the operations
	switch (operation) {
		case 1: Addition(num1,num2);
			break;
		case 2: Subtraction(num1,num2);
			break;
		case 3: Multiplication(num1,num2);
			break;
		case 4: Division(num1,num2);
			break;
		case 5: Modulus(num1,num2);
			break;
		case 6: EvenOrOdd(num1,num2);
			break;
		case 7: PrimeOrNot(num1,num2);
			break;
		default: std::cout << "Invalid operation selected. Please try again." << std::endl;
			break;

	}
}

void Calculator::Addition(int num1, int num2) {
	std::cout << "The result of addition is: " << num1 + num2 << std::endl;
}

void Calculator::Subtraction(int num1, int num2) {
	std::cout << "The result of subtracting" << num1 << " & " << num2 <<  " is: " << num1 - num2 << std::endl;
}

void Calculator::Multiplication(int num1, int num2) {
	std::cout << "The result of multiplying" << num1 << " with " << num2 << " is : " << double(num1) * num2 << std::endl;
}

void Calculator::Division(int num1, int num2) {
	if(num2==0) {
		std::cout<<"Dividing by Zero is undefined. Please enter a non-zero divisor" << std::endl;
		return;
	}
	std::cout <<"The results of dividing " << num1 << " by " << num2 << " is : " << (double)num1 / num2 << std::endl;
}

void Calculator::Modulus(int num1, int num2) {
	if((num1 || num2) ==0) {
		std::cout<<"Modulus by zero is undefined. Please enter non-zero numbers" << std::endl;
		return;
	}
	num2=abs(num2);
	std::cout << "The modulus of " << num1 << " and " << num2 << " is : " << ((num1 % num2)+num2)%num2 << std::endl;
}

void Calculator::PrimeOrNot(int num1, int num2) {
	PrimeOrNot::IsPrimeOrNot(abs(num1));
	PrimeOrNot::IsPrimeOrNot(abs(num2));
}

void Calculator::EvenOrOdd(int num1, int num2) {
	isEvenOrOdd(num1);
	isEvenOrOdd(num2);
}
void Calculator::isEvenOrOdd(int num) {
	if(num%2 == 0) {
		std::cout << num << " is an even number." << std::endl;
	} else {
		std::cout << num << " is an odd number" << std::endl;
	}
}
