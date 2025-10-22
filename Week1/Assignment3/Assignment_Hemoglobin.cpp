#include <iostream>

int main()
{
    std::string gender;
    int hemoglobinValue;

    std::cout << "What is your gender? (Male/Female): ";
    std::cin >> gender;
    std::cout << "Give your hemoglobin value: ";
    std::cin >> hemoglobinValue;

    if (gender == "Male")
    {
        if (hemoglobinValue < 134)
        {
          std::cout << "Your hemoglobin value is low.";
        }
        else if (hemoglobinValue > 195)
        {
          std::cout << "Your hemoglobin value is too high.";
        }
        else
        {
          std::cout << "Your hemoglobin value is normal.";
        }
    }
    else if (gender == "Female")
    {
        if (hemoglobinValue < 117)
        {
          std::cout << "Your hemoglobin value is low.";
        }
        else if (hemoglobinValue > 175)
        {
          std::cout << "Your hemoglobin value is too high.";
        }
        else
        {
          std::cout << "Your hemoglobin value is normal.";
        }
    }
    else
    {
        std::cout << "Error: Can't determine results. Unknown gender.";
    }

    return 0;
}
