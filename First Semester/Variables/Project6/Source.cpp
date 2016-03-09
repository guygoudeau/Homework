#include <iostream>

int main()
{
	int a;
	int b;
	int atemp;
	int btemp;

	std::cout << "Enter two numbers." << std::endl << std::endl;
	std::cout << "First number, a: ";
	std::cin >> a;
	std::cout << std::endl;
	std::cout << "Second number, b: ";
	std::cin >> b;
	std::cout << std::endl;
	system("pause");
	std::cout << std::endl;

	atemp = a;
	btemp = b;
	b = atemp;
	a = btemp;
	 
	std::cout << "a now equals " << a << std::endl;
	std::cout << "b now equals " << b << std::endl;

	std::cout << std::endl;
	system("pause");
	return 0;
}