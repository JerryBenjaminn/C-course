#include "ajoneuvot.h"
#include <iostream>

int main() {
    Henkiloauto auto1(180, 2018, 1400.0, 5, 4, 5);
    KuormaAuto kuorma1(120, 2015, 8000.0, 2, 6, 20000.0);
    Lentokone lento1(900, 2010, 40000.0, 11000.0);
    Laiva laiva1(40, 2005, 200000.0, 9.5);

    auto1.tulosta();
    kuorma1.tulosta();
    lento1.tulosta();
    laiva1.tulosta();

    std::cin.get();

    return 0;
}
