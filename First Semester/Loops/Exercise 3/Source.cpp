#include <iostream>



int main()
{

	int a=0;

	for (int i = 0; i < 1000; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			a = a + i;
		}
	}
	std::cout<< a << std::endl << std::endl;

	system("pause");
	return 0;
}