#include <iostream>
#include "celsius.h"
#include "fahrenheit.h"

int main()
{
    bool loop{ true };
    std::cout << "Enter 1 to convert celsius to fahrenheit and 2 to convert fahrenheit to celsius. Entering 3 closes the program.\n\n";

    std::cout << "1. Celsius to fahrenheit\n";
    std::cout << "2. Fahrenheit to celsius\n";
    std::cout << "3. Exit the program\n\n";

    int convert{0};
    std::cin >> convert;
    while (loop == true)
    {
        switch (convert)
        {
        char stop;
        case 1:
            loop = false;
            // Conversion from celsius to fahrenheit is done in Celsius.cpp and the value is returned here
            std::cout << "The degree celsius you gave is " << celsius() << "\370F" << " in fahrenheit.\n\n";
            std::cout << "Do you want to exit the program? [y/n]:\n";
            std::cin >> stop;
            if (stop == 'y' || stop == 'Y')
                exit('y' || 'Y');
            else
                main();
            break;
        case 2:
            loop = false;
            //Conversion from fahrenheit to celsius is done in Fahrenheit.cpp and the value is returned here
            std::cout << "The fahrenheit degree you gave is " << fahrenheit() << "\370C" << " in celsius.\n\n";
            std::cout << "Do you want to exit the program? [y/n]:\n";
            std::cin >> stop;
            if (stop == 'y' || stop == 'Y')
                exit('y' || 'Y');
            else
                main();
            break;
        case 3:
            loop = false;
            std::cout << "Are you sure you want to exit the program? [y/n]:\n";
            std::cin >> stop;
            if (stop == 'y' || stop == 'Y')
                exit('y' || 'Y');
            else
                main();
            break;
        default:
            // Makes the user pick another number until a valid case number is given
            std::cout << "This is not a valid number, please pick another number: \n";
            // cin.clear() clears errors in case of typing a string char instead of an int
            std::cin.clear();
            // cin.ignore() removes the unwanted value from cin, note that ignore() checks for one character
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin >> convert;
        }
    }
}
