#include <iostream>

void nollaa(int* osoitin, int lukumaara);

int main()
{
    int taulukko[3] = {1, 2, 3};
    int* osoitin = taulukko;
    int lukumaara = sizeof(taulukko) / sizeof(taulukko[0]);

    nollaa(osoitin, lukumaara);

    for(int i = 0; i < lukumaara; i++)
    {
        std::cout << taulukko[i] << "\n";
    }

    return 0;
}

void nollaa(int* osoitin, int lukumaara)
{
    for(int i = 0; i < lukumaara; i++)
    {
        osoitin[i] = 0;       
    }
}