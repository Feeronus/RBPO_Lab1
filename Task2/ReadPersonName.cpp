#include <iostream>
#include <string>
std::string ReadPersonName()
{
	std::string name;
	std::cout << "Input person's name: " << std::endl;
	std::cin >> name;
	return name;
}
