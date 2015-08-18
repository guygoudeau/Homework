#include <iostream>

int x;
int y;

int main()
{

	std::cout << "Enter a value for y: ";
	std::cin >> y;
	std::cout <<std::endl;

	if (y==0) {
		x = 100;
	}

	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;

	system("pause");
	return 0;
}