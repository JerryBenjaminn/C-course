#include <iostream>

int main(){


    //Integers

    int x; //Declaration
    x = 5; //Assignment

    int y = 6;

    int sum = x + y;

    std::cout << y << "\n";

    std::cout << x << "\n";

    std::cout << sum << "\n";

    int age = 33;
    int year = 2025;
    int days = 7;

    std::cout << days << "\n";
    std::cout << year << "\n";
    std::cout << age << "\n";

    //Doubles

    double price = 10.99;
    double gpa = 2.5;
    double temperature = 12.1;

    std::cout << price << "\n";

    //Single character

    char grade = 'A';
    char initial = 'J';
    char currency = '$';

    std::cout << initial << "\n";
    std::cout << currency << "\n";

    //Booleans

    bool student = true;
    bool graduated = false;
    bool stupidAF = true;

    //String

    std:: string name = "Jerry";
    std:: string month = "June";
    std:: string city = "Espoo";

    std::cout << "My name is " << name << " my birthday is in " << month << " and I live in " << city << "\n";

    std::cout << name;

    


    return 0;
}