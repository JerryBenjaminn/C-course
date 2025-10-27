#include <iostream>

double GallonToLitres(double gallon) {
    return gallon * 3.78541;
}

int main()
{    
    double gallon;
    
    std::cout << "Convert gallons to litres (negative to quit): ";
    std::cin >> gallon;

    while(gallon > 0)
    {
        double litres = GallonToLitres(gallon);
        std::cout << "Litres: " << litres << "\n";
        std::cout << "Convert gallons to litres (negative to quit): ";
        std::cin >> gallon;
    }
    
    return 0;
}

