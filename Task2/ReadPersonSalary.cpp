#include <iostream>
#include <string>
void ReadPersonSalary(double* salary)
{
	std::cout << "Input person's salary: " << std::endl;
	std::cin >> *(salary);
}