#include <iostream>
#include "celsius.h"

double celsius()
{
	std::cout << "Give Celsius degree that you want to convert: ";
	double celsius{ 0 };
	std::cin >> celsius;
	// Formula used to convert celsius to fahrenheit
	double fahrenheit = (celsius * 1.8) + 32;
	return fahrenheit;
}
