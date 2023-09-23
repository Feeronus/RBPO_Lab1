#include <iostream>
#include <string>
extern std::string strsalary;
extern unsigned short height;

void WritePersonData(const std::string&, const std::string&, const std::string&, const unsigned short*);
void ReadPersonData(std::string&,unsigned short&, double&);
void ReadPersonData(std::string&,unsigned short&, unsigned short&, unsigned short&);
int main()
{
	unsigned short weight, age;
	std::string strheight, strweight, name;
	double salary;
	ReadPersonData(name, age, salary);
	strsalary = std::to_string(salary);
	WritePersonData(name, strheight, strweight, &age);
	ReadPersonData(name, age, height, weight);
	strheight = std::to_string(height);
	strweight = std::to_string(weight);
	WritePersonData(name, strheight, strweight, &age);
	return 0;
}


