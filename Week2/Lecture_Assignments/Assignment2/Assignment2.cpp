#include <iostream>

int main()
{
    double x = 5;
    double* xPtr = &x;

    std::cout << *xPtr << "\n";

    (*xPtr)++; //Tai *xPtr +=1;
    std::cout << *xPtr;
}