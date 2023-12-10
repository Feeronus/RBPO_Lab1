#include <iostream>
#include <string>
unsigned short ReadPersonAge();
std::string ReadPersonName();
void ReadPersonSalary(double*);
void ReadPersonData(std::string&name, unsigned short&age, double&salary)
{
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonSalary(&salary);
}