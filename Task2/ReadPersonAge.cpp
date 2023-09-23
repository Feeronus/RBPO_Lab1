#include <iostream>
unsigned short ReadPersonAge()
{
	unsigned short age;
	std::cout << "Input person's age: " << std::endl;
	std::cin >> age;
	return age;
}