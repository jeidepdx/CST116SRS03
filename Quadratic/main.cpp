// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <cassert>


int main()
{
	double a{};
	double b{};
	double c{};
	double soln1{};
	double soln2{};

	double mantissa{};
	double root{};
	

	std::cout << "Enter values for a, b & c, separated by spaces" << std::endl;
	std::cin >> a >> b >> c;

	mantissa = (b * b) - (4.0 * a * c);
	assert(mantissa >= 0);

	root = sqrt(mantissa);


	soln1 = ((-1.0 * b) + root) / (2.0 * a);
	soln2 = ((-1.0 * b) - root) / (2.0 * a);

	std::cout << soln1 << std::endl;
	std::cout << soln2 << std::endl;
	
	return 0;
}

