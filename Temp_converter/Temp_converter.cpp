#include <iostream>

int main()
{
    std::cout << "Enter 1 to convert celsius to fahrenheit and 2 to convert fahrenheit to celsius.\n\n";

    std::cout << "1. Celsius to fahrenheit\n";
    std::cout << "2. Fahrenheit to celsius\n";

    int convert{};
    std::cin >> convert;

    switch (convert)
    {
    case 1:
        std::cout << "Olet valinnut celsiuksen";
        break;
    case 2:
        std::cout << "Olet valinnut fahrenheitin";
        break;
    default:
        std::cout << "Ei oikein";
        break;
    }
}
