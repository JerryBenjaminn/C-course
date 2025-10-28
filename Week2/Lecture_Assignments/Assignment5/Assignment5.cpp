#include <iostream>

int main()
{
    int x = 5;
    int* xPtr = &x;
    int** z = &xPtr;

    (**z)++;
    std::cout << x;
}