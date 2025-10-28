#include <iostream>

int main()
{
    int x = 5;
    int* xPtr = &x;

    std::cout << x << "\n";
    std::cout << *xPtr;
}