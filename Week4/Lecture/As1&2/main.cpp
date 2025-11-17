#include <iostream>

class Car
{
    private:
        std::string _brand;
        int _year;

    public:

        void set_brand(std::string brand)
        {
            _brand = brand;
        }
        void set_year(int year)
        {
            _year = year;
        }
        void print_info()
        {
            std::cout << "Brand: " << _brand << "\n";
            std::cout << "Year: " << _year << "\n";
        }
};

class Lamp {
 
public:
    
    bool _on;

    Lamp() {
        std::cout << "Lamp created" << "\n";
    }

    
    ~Lamp() {
        std::cout << "Lamp destroyed" << "\n";
    }

    void turn_on() {
        _on = true;
        std::cout << "On" << "\n";
    }

    void turn_off() {
        _on = false;
        std::cout << "Off" << "\n";
    }
};

int main()
{
    Car car;

    car.set_brand("Saab 900");
    car.set_year(1978);

    car.print_info();

    Lamp myLamp;
    myLamp.turn_on();
    myLamp.turn_off();

    return 0;
}