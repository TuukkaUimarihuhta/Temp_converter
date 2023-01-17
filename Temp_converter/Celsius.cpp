#include <iostream>
#include "celsius.h"

double celsius()
{
	std::cout << "Give celsius degree that you want to convert: ";
	double C{ 0 };
	std::cin >> C;
	// Formula used to convert celsius to fahrenheit
	double F = (C * 1.8) + 32;
	return F;
}
