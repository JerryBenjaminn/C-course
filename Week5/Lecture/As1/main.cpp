#include <iostream>
#include <string>

class Henkilo {
  protected:
    std::string _nimi;

  public:
    Henkilo(std::string nimi) : _nimi(nimi){}
};

class Opiskelija : public Henkilo{
  protected:
    int _opiskelijaNumero;

  public:
    Opiskelija(std::string nimi, int opiskelijaNumero) : Henkilo(nimi), _opiskelijaNumero(opiskelijaNumero){} 
};

int main()
{
  Opiskelija tivilainen("Timppa Tivilainen", 209319);

  return 0;
}