#include <iostream>

int main()
{
    int width;
    int heigth;

    std::cout << "Type rectangle width: ";
    std::cin >> width;

    std::cout << "Type rectangle heigth: ";
    std::cin >> heigth;
    
    double rectArea = width * heigth;
    double rectPerimeter = (width * 2) + (heigth * 2);


    std::cout << "Rectangle area: " << rectArea << "\n";
    std::cout << "Rectangle perimeter: " << rectPerimeter;


    return 0;
}