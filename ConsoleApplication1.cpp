// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int n;
	int k = 0;
	std::cin >> n;
	for (int i = 1; i < 32; ++i) {
		if (n == (1 << i)) {
			std::cout << n << " is a multipe of 2! It is 2 to the power of " << i << ".\n";
			++k;
		}
	}
	if (k == 0) {
		std::cout << n << " is not a multiple of 2!\n";
	}
    return 0;
}

