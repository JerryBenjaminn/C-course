#include <iostream>

int summaa(int& luku1, int& luku2);
int summaa(int* luku1, int* luku2);

int main()
{
    int luku1 = 5;
    int luku2 = 10;
   
    std::cout << "Osoitin: " << summaa(&luku1, &luku2) << "\n";
    std::cout << "Referenssi: " << summaa (luku1, luku2);
}

int summaa(int& luku1, int& luku2)
{
    int summa = luku1 + luku2;
    return summa;
}

int summaa(int* luku1, int* luku2)
{
    int summa = *luku1 + *luku2;
    return summa;
}

