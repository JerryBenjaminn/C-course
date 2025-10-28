#include <iostream>

int main()
{
    int* ptr = nullptr;

    if(!ptr)
    {
        std::cout << "Pointer is null.";
    }
    else
    {
        std::cout << "Pointer can be used";
    }
}