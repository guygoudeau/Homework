#include <iostream>

char name[30];

int main()
{

	std::cout << "Input your first and last name: ";
	std::cin.getline(name, 32);

	for (int i = strlen(name); i >= 0; --i)
	{		
		std::cout << name[i];
	}
	std::cout << std::endl;

	system("pause");
	return 0;
}