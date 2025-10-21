#include <iostream>

int main()
{
	std::string name;

	std::cout << "Hello. What is your name?: ";
	std::cin >> name;
	std::cout << "Hello, " << name;

	return 0;
}