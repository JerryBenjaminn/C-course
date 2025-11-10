#include <iostream>
#include <algorithm>

int* varaa_taulukko(int n);
void lue_arvot(int* t, int n);
void kaanna(int* t, int n);
void tulosta_arvot(const int* t, int n);

int main()
{
    int n;
    std::cout << "Kuinka monta lukua? ";
    std::cin >> n;

    int* taulukko = varaa_taulukko(n);
    
    lue_arvot(taulukko, n);

    kaanna(taulukko, n);

    tulosta_arvot(taulukko, n);
    
    delete[] taulukko;
    return 0;
}

int* varaa_taulukko(int n)
{
    int* taulukko = new int[n];
    return taulukko;
}

void lue_arvot(int* t, int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cout << "Anna luku: ";
        std::cin >> t[i];
    }
}

void kaanna(int* t, int n)
{
    std::reverse(t, t + n);
}

void tulosta_arvot(const int* t, int n)
{
    for(int i = 0; i < n; i++)
    {
        std::cout << t[i] << "\n";
    }
}
