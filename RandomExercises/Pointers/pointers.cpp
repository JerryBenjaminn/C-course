#include <iostream>

void AddOne(int* n)
{
  (*n)++;
}

int main()
{
    //ptr = pointer
    int x = 5;
    int* xPtr = &x;

    std::cout << x << "\n";
    std::cout << xPtr << "\n";
    std::cout << *xPtr << "\n";

    *xPtr = 10;
    std::cout << x << "\n";

    AddOne(xPtr);
    std::cout << *xPtr;

}