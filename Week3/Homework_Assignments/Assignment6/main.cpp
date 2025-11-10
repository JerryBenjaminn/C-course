#include <iostream>
#include <algorithm>

int* taulukko;
int n;

void varaa_taulukko();
void lue_arvot();
void kaanna();
void tulosta_arvot();

int main()
{
    std::cout << "Kuinka monta lukua? ";
    std::cin >> n;

    varaa_taulukko();
    lue_arvot();
    kaanna();
    tulosta_arvot();

    delete[] taulukko;
    return 0;
}

void varaa_taulukko()
{
    taulukko = new int[n];
}

void lue_arvot()
{
    for (int i = 0; i < n; i++) {
        std::cout << "Anna luku: ";
        std::cin >> taulukko[i];
    }
}

void kaanna()
{
    std::reverse(taulukko, taulukko + n);
}

void tulosta_arvot()
{
    for (int i = 0; i < n; i++)
        std::cout << taulukko[i] << "\n";
}
