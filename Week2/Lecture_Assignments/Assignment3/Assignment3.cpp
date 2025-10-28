#include <iostream>

int main()
{
    int numbers[] = {1, 2, 3, 4, 5};
    int* numPtr = numbers;

    for(int i = 0; i < 5; i++)
    {
        std::cout << *numPtr << "\n";
        (*numPtr)++;        
    }
}