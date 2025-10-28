#include <iostream>

void doubleNumber(int* number);

int main()
{
    int x = 5;
    int* xPtr = &x;

    doubleNumber(xPtr);
    std::cout << x;
}

void doubleNumber(int* number)
{
    (*number) *= 2;
}