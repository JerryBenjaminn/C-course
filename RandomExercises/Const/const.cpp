#include <iostream>
#include <cmath>


int main(){

    //const keyword specifies that variable is constant
    //tells the compiler to prevent anything from modifyin it
    //(readonly)

    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << " cm" << "\n";

    const int LIGHT_SPEED = 299792458;
    const double DISTANCE_FROM_EARTH = 1.5 * pow(10, 11);
    const double TIME_TO_TRAVEL = DISTANCE_FROM_EARTH / LIGHT_SPEED;
    double time_to_travel_in_minutes = TIME_TO_TRAVEL / 60;
    std::cout << TIME_TO_TRAVEL << "s\n";
    std::cout << time_to_travel_in_minutes << std::endl;


    return 0;

}