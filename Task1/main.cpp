#include <iostream>
#include <string>
std::string strsalary;
unsigned short height;
unsigned short ReadPersonAge()
{
	unsigned short age;
	std::cout << "Input person's age: " << std::endl;
	std::cin >> age;
	return age;
}
std::string ReadPersonName()
{
	std::string name;
	std::cout << "Input person's name: " << std::endl;
	std::cin >> name;
	return name;
}
void ReadPersonHeight()
{
	std::cout << "Input person's height: " << std::endl;
	std::cin >> height;
}
void ReadPersonWeight(unsigned short& weight)
{
	std::cout << "Input person's weight: " << std::endl;
	std::cin >> weight;

}
void ReadPersonSalary(double* salary)
{
	std::cout << "Input person's salary: " << std::endl;
	std::cin >> *(salary);
}
void ReadPersonData(std::string& name, unsigned short& age, double& salary)
{
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonSalary(&salary);
}
void ReadPersonData(std::string& name, unsigned short& age, unsigned short& height, unsigned short& weight)
{
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonHeight();
	ReadPersonWeight(weight);
}
void WritePersonData(const std::string& name, const std::string& height, const std::string& weight, const unsigned short* age)
{
	std::cout << "Person's name: " << name << std::endl;
	std::cout << "Person's height: " << height << std::endl;
	std::cout << "Person's weight: " << weight << std::endl;
	std::cout << "Person's age: " << *(age) << std::endl;
	std::cout << "Person's salary: " << strsalary << " $" << std::endl;
}
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

