#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
	//make a simple calculator application in cmd line that can do addition, subtraction, multiplication, division, modulus and can tell if a number is even or odd or prime or not
public:
	int mNum1;
	int mNum2;
	int mOperation;
	bool isExitFlagTrue = false;

	void calculatorScreen();
	void CalcOperations(int Operation,int num1, int num2);
	void Addition(int num1, int num2);
	void Subtraction(int num1, int num2);
	void Multiplication(int num1, int num2);
	void Division(int num1, int num2);
	void Modulus(int num1, int num2);
	void EvenOrOdd(int num1,int num2);
	void isEvenOrOdd(int num);
	void PrimeOrNot(int num1,int num2);
};


#endif //CALCULATOR_H
