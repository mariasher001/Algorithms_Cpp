//
// Created by msher on 10/26/2025.
//

#include "SquareNumberPattern.h"

#include <iostream>

void SquareNumberPattern::printSquareNumberPattern(int n) {
	int counter = 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			std::cout << counter++ << " ";
		}
		std::cout << std::endl;
	}
}

void SquareNumberPattern::printStarSquarePattern(int n) {
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			std::cout << "* ";
		}
		std::cout << std::endl;
	}
}

void SquareNumberPattern::printCharachterSquarePattern(int n, char charachter) {
	for (int i = 0; i < n; ++i) {
		char ch = charachter;
		std::cout << ch << " ";
		for (int j = 1; j < n; ++j) {
			ch += 1;
			std::cout << ch << " ";
		}
		std::cout << std::endl;
	}
}

void SquareNumberPattern::printStarTrianglePattern(int n) {
	for (int i = 1; i <= n; ++i) {
		for (int j = 0; j < i; ++j) {
			std::cout<<"* ";
		}
		std::cout<<std::endl;
	}
}

void SquareNumberPattern::printReverseNumberTrianglePattern(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = i; j >0; j--) {
			std::cout << j << " ";
		}
		std::cout << std::endl;
	}

}

void SquareNumberPattern::printPyramidNumberPattern(int n) {
	for (int  i = 1;i <= n; i++) {
		for(int j =n-i;j>0;j--) {
			std::cout << " ";
		}
		for(int j = i;j>=1;j--) {
			std::cout << j;
		}
		for (int k=i-1; k >0  ;k--) {
			std::cout << k;
		}
		std::cout << std::endl;
	}
}

void SquareNumberPattern::hollowDiamondPattern(int n) {
//print the spaces and 1 star
for (int i = 1; i <= n; i++) {
	for (int j = n-i; j > 0; j--) {
		std::cout << "-";
	}
	std::cout << "*";
	std::cout << std::endl;
}
}
