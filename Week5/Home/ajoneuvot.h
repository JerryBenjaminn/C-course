#pragma once

#include <string>
#include <iostream>

class Ajoneuvo {
protected:
    int _huippunopeus;
    int _kayttoonottovuosi;
    double _paino;

public:
    Ajoneuvo(int huippunopeus, int kayttoonottovuosi, double paino)
        : _huippunopeus(huippunopeus),
          _kayttoonottovuosi(kayttoonottovuosi),
          _paino(paino)
    {
    }

    void tulosta() const {
        std::cout << "Huippunopeus: " << _huippunopeus << "\n";
        std::cout << "Kayttoonottovuosi: " << _kayttoonottovuosi << "\n";
        std::cout << "Paino: " << _paino << "\n";
    }
};

class Auto : public Ajoneuvo {
protected:
    int _ovienLkm;
    int _renkaidenLkm;

public:
    Auto(int huippunopeus,
         int kayttoonottovuosi,
         double paino,
         int ovienLkm,
         int renkaidenLkm)
        : Ajoneuvo(huippunopeus, kayttoonottovuosi, paino),
          _ovienLkm(ovienLkm),
          _renkaidenLkm(renkaidenLkm)
    {
    }

    void tulosta() const {
    Ajoneuvo::tulosta();
    std::cout << "Ovien lkm: " << _ovienLkm << "\n";
    std::cout << "Renkaiden lkm: " << _renkaidenLkm << "\n";
}
};

class Henkiloauto : public Auto {
private:
    int _maxMatkustajat;

public:
    Henkiloauto(int huippunopeus,
                int kayttoonottovuosi,
                double paino,
                int ovienLkm,
                int renkaidenLkm,
                int maxMatkustajat)
        : Auto(huippunopeus, kayttoonottovuosi, paino, ovienLkm, renkaidenLkm),
          _maxMatkustajat(maxMatkustajat)
    {
    }

    void tulosta() const {
    Auto::tulosta();
    std::cout << "Max matkustajat: " << _maxMatkustajat << "\n";
}
};

class KuormaAuto : public Auto {
private:
    double _maxKuorma;

public:
    KuormaAuto(int huippunopeus,
               int kayttoonottovuosi,
               double paino,
               int ovien_lkm,
               int renkaiden_lkm,
               double maxKuorma)
        : Auto(huippunopeus, kayttoonottovuosi, paino, ovien_lkm, renkaiden_lkm),
          _maxKuorma(maxKuorma)
    {
    }

    void tulosta() const {
    Auto::tulosta();
    std::cout << "Max kuorma: " << _maxKuorma << "\n";
}
};

// Lentokone perii Ajoneuvosta
class Lentokone : public Ajoneuvo {
private:
    double _maxKorkeus;

public:
    Lentokone(int huippunopeus,
              int kayttoonottovuosi,
              double paino,
              double maxKorkeus)
        : Ajoneuvo(huippunopeus, kayttoonottovuosi, paino),
          _maxKorkeus(maxKorkeus)
    {
    }

    void tulosta() const {
    Ajoneuvo::tulosta();
    std::cout << "Max korkeus: " << _maxKorkeus << " m\n";
}
};

class Laiva : public Ajoneuvo {
private:
    double _maxSyvaus;

public:
    Laiva(int huippunopeus,
          int kayttoonottovuosi,
          double paino,
          double maxSyvaus)
        : Ajoneuvo(huippunopeus, kayttoonottovuosi, paino),
          _maxSyvaus(maxSyvaus)
    {
    }

    void tulosta() const {
    Ajoneuvo::tulosta();
    std::cout << "Max syvaus: " << _maxSyvaus << " m\n";
}
};

