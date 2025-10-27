#include <iostream>

int main()
{
    
    double inch;
    std::cout << "Type how many inches to convert (negative to quit): ";
    std::cin >> inch;

    while (inch > 0)
    {
        double cm = 2.54 * inch;              
        std::cout << "Converted to: " << cm << "\n";

        std::cout << "Type how many inches to convert (negative to quit): ";
        std::cin >> inch;
    }

    return 0;
}