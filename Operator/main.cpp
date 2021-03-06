// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{
	int i0{};
	int i1{};
	double d0{};
	double d1{};

	std::cin >> i0 >> i1 >> d0 >> d1;
	
	std::cout << "i0 * i1 == " << std::left << std::setw(10) << i0 * i1 << std::endl;
	std::cout << "i0 * d0 == " << std::left << std::setw(10) << i0 * d0 << std::endl;
	std::cout << "d0 * d1 == " << std::left << std::setw(10) << d0 * d1 << std::endl;

	std::cout << "i0 / i1 == " << std::left << std::setw(10) << i0 / i1 << std::endl;
	std::cout << "i0 / d0 == " << std::left << std::setw(10) << i0 / d0 << std::endl;
	std::cout << "d0 / d1 == " << std::left << std::setw(10) << d0 / d1 << std::endl;

	std::cout << "i0 % i1 == " << std::left << std::setw(10) << i0 % i1 << std::endl;

	std::cout << "i0 + i1 == " << std::left << std::setw(10) << i0 + i1 << std::endl;
	std::cout << "i0 + d0 == " << std::left << std::setw(10) << i0 + d0 << std::endl;
	std::cout << "d0 + d1 == " << std::left << std::setw(10) << d0 + d1 << std::endl;

	std::cout << "i0 - i1 == " << std::left << std::setw(10) << i0 - i1 << std::endl;
	std::cout << "i0 - d0 == " << std::left << std::setw(10) << i0 - d0 << std::endl;
	std::cout << "d0 - d1 == " << std::left << std::setw(10) << d0 - d1 << std::endl;

	return 0;
}

