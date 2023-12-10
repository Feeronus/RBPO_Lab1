#include <iostream>
#include <string>
unsigned short ReadPersonAge();
std::string ReadPersonName();
void ReadPersonHeight();
void ReadPersonWeight(unsigned short&);
void ReadPersonData(std::string&name, unsigned short&age, unsigned short&height, unsigned short&weight)
{
	name= ReadPersonName();
	age= ReadPersonAge();
	ReadPersonHeight();
	ReadPersonWeight(weight);
}