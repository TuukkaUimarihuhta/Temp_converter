#include <iostream>
#include "celsius.h"
#include "fahrenheit.h"

int main()
{
    // boolean variable for the while loop
    bool loop{ true };
    std::cout << "Enter 1 to convert Celsius to Fahrenheit and 2 to convert Fahrenheit to Celsius. Entering 3 closes the program.\n\n";

    std::cout << "1. Celsius to Fahrenheit\n";
    std::cout << "2. Fahrenheit to Celsius\n";
    std::cout << "3. Exit the program\n\n";

    int convert{0};
    std::cin >> convert;
    // while loop to go through the cases again incase user enters a number that isn't 1, 2 or 3
    while (loop == true)
    {
        switch (convert)
        {
        char stop;
        case 1:
            loop = false;
            // Conversion from celsius to fahrenheit is done in Celsius.cpp and the value is returned here
            std::cout << "The Celsius degree you gave is " << celsius() << "\370F" << " in Fahrenheit.\n\n";
            std::cout << "Do you want to exit the program? [y/n]:\n";
            std::cin >> stop;
            if (stop == 'y' || stop == 'Y')
                exit('y' || 'Y');
            else
                main();
            break;
        case 2:
            loop = false;
            // Conversion from fahrenheit to celsius is done in Fahrenheit.cpp and the value is returned here
            std::cout << "The Fahrenheit degree you gave is " << fahrenheit() << "\370C" << " in Celsius.\n\n";
            std::cout << "Do you want to exit the program? [y/n]:\n";
            std::cin >> stop;
            if (stop == 'y' || stop == 'Y')
                exit('y' || 'Y');
            else
                main();
            break;
        case 3:
            loop = false;
            // Asks you if you want to quit, letters 'y' and 'Y' will stop the program, everything else is treated as no
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
