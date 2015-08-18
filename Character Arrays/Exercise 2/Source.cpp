#include <iostream>

char name[30];

int main()
{

	std::cout << "Input your first and last name: ";
	std::cin.getline(name, 256);
	std::cout << name << std::endl;

	system("pause");
	return 0;
}