#include <iostream>

int x = 5;

void numero();

int main()
{
    std::cout << x << "\n";
    numero();
}

void numero()
{
    x = 7;
    std::cout << x;
}