#include <iostream>
#include "fahrenheit.h"

double fahrenheit()
{
	std::cout << "Give Fahrenheit degree that you want to convert: ";
	double fahrenheit{ 0 };
	std::cin >> fahrenheit;
	// Formula that is used to convert fahrenheit to celsius
	double celsius = (fahrenheit - 32) * 0.5556;
	return celsius;
}
