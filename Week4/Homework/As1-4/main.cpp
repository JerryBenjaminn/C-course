#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

class Auto
{
private:
    std::string _rekisteritunnus;
    int _huippunopeus;
    int tamanhetkinen_nopeus = 0;
              
public:
    double kuljettu_matka = 0.0;

    Auto(const std::string& rekisteritunnus, int huippunopeus)
    {
        _rekisteritunnus = rekisteritunnus;
        _huippunopeus = huippunopeus;
    }

    void kiihdyta(int nopeuden_muutos)
    {
        tamanhetkinen_nopeus += nopeuden_muutos;

        if (tamanhetkinen_nopeus < 0)
            tamanhetkinen_nopeus = 0;
        else if (tamanhetkinen_nopeus > _huippunopeus)
            tamanhetkinen_nopeus = _huippunopeus;
    }

    void kulje(int tunnit)
    {
        kuljettu_matka += tamanhetkinen_nopeus * tunnit;
    }

    void tulosta()
    {
        std::cout << "Rekisterinumero: " << _rekisteritunnus << "\n";
        std::cout << "Huippunopeus(km/h): " << _huippunopeus << "\n";
        std::cout << "Nopeus(km/h): " << tamanhetkinen_nopeus << "\n";
        std::cout << "Kuljettu matka(km): " << kuljettu_matka << "\n";
    }
};

int main()
{
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    std::vector<Auto> autot;

    for (int i = 1; i <= 10; i++)
    {
        std::string rekisterinumero = "ABC-" + std::to_string(i);
        int huippunopeus = std::rand() % 101 + 100;
        autot.emplace_back(rekisterinumero, huippunopeus);
    }

    bool kilpailu_kaynnissa = true;

    while (kilpailu_kaynnissa)
    {
        for (Auto& automobiili : autot)
        {
            int nopeuden_muutos = (std::rand() % 26) - 10;
            automobiili.kiihdyta(nopeuden_muutos);
            automobiili.kulje(1);

            if (automobiili.kuljettu_matka >= 10000.0)
            {
                kilpailu_kaynnissa = false;
                break;
            }
        }
    }

    for (Auto& automobiili : autot)
    {
        automobiili.tulosta();
        std::cout << "----------------------\n";
    }

    return 0;
}
