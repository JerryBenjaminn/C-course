#include <iostream>
#include <string>

class Elain {
public:
    Elain() {
        std::cout << "Elain luotu\n";
    }

    virtual void aantele() = 0;
};

class Kissa : public Elain {
public:
    Kissa() {
        std::cout << "Kissa luotu\n";
    }

    void aantele() override {
        std::cout << "MauMou!\n";
    }
};

class Koira : public Elain {
public:
    Koira() {
        std::cout << "Koira luotu\n";
    }

    void aantele() override {
        std::cout << "Vuhhuu vuhuu vuu\n";
    }
};

int main() {
  
    Kissa kissa1;
    Koira koira1;

    kissa1.aantele();
    koira1.aantele();

    return 0;
}

//T4: Koska luokassa on virtuaalifunktio, se tekee siitä abstraktin. Abstraktista luokasta ei voi
// luoda olioita.
