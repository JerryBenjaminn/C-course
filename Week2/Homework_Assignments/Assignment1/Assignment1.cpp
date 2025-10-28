#include <iostream>

int main()
{
    int x = 1;
    int y;
    float z = 1.5;
    double d = 2.234;
    char c = 'a';
    bool isRunning = false;

    std::cout << sizeof(x) << "\n";
    std::cout << sizeof(y) << "\n";
    std::cout << sizeof(z) << "\n";
    std::cout << sizeof(d) << "\n";
    std::cout << sizeof(c) << "\n";
    std::cout << sizeof(isRunning) << "\n";
}