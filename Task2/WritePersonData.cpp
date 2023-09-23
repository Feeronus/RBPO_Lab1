#include <iostream>
#include <string>
std::string strsalary;
void WritePersonData(const std::string&name, const std::string&height, const std::string&weight, const unsigned short*age)
{
	std::cout << "Person's name: " << name << std::endl;
	std::cout << "Person's height: " << height << std::endl;
	std::cout << "Person's weight: " << weight << std::endl;
	std::cout << "Person's age: " << *(age) << std::endl;
	std::cout << "Person's salary: " << strsalary << " $" << std::endl;
}