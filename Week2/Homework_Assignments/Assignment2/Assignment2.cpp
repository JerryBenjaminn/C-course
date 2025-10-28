#include <iostream>

int main()
{
    int x = 5;
    int* y = &x;

    std::cout << y << "\n";
    std::cout << &y << "\n";
    std::cout << x << "\n";
    std::cout << *y << "\n";
}