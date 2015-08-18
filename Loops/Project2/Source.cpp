#include <iostream>



int main()
{

	for (int i = 0; i <= 100; i++)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
		{
			std::cout << "FizzBuzz ";
		}
		else if (i % 5 == 0)
		{
			std::cout << "Buzz ";
		}
		else if (i % 3 == 0) 
		{
			std::cout << "Fizz ";
		}	
		else
			std::cout << i << " ";
	}
	std::cout << std::endl << std::endl;

	system("pause");
	return 0;
}