#include <iostream>



int main()
{

	for (int i = 100; i >= 0; i--)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl << std::endl;

	for (int i = 99; i >= 0; i--)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl << std::endl;

	for (int i = 100; i >= 1; i--)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl << std::endl;

	for (int i = 100; i >= 0; i=i-2)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl << std::endl;

	system("pause");
	return 0;
}