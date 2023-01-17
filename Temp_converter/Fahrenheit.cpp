#include <iostream>
#include "fahrenheit.h"

double fahrenheit()
{
	std::cout << "Give fahrenheit degree that you want to convert: ";
	double F{ 0 };
	std::cin >> F;
	// Formula that is used to convert fahrenheit to celsius
	double C = (F - 32) * 0.5556;
	return C;
}
