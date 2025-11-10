#include <iostream>

int* varaa_taulukko(int n);

int main()
{
    int n = 5;
    int* taulukko = varaa_taulukko(n);

    for(int i = 0; i < n; i++)
    {
        taulukko[i] = i;
    }

    for(int i = 0; i < n; i++)
    {
        std::cout << taulukko[i] << "\n";
    }

    delete[] taulukko;
    return 0;
}

int* varaa_taulukko(int n)
{
    int* taulukko = new int[n];
    return taulukko;
}