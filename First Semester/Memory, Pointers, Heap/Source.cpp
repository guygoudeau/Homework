//Guy Goudeau
//Sept 15, 2015
#include <iostream>

char reverse[5] = { 'H','E','L','L','O' };
char *ptr = &reverse[5];
char hTemp;
char eTemp;
char lTemp;
char oTemp;

void RevString(char* array)
{
	for (int i = 0; i < strlen(reverse); i++)
	{	
		hTemp = reverse[0];
		eTemp = reverse[1];
		lTemp = reverse[2];
		oTemp = reverse[4];
		std::cout << reverse[i] << " ";
	}
	std::cout << std::endl;

	for (int i = 0; i < strlen(reverse); i++)
	{
		reverse[4] = hTemp;
		std::cout << reverse[i] << " ";
	}
	std::cout << std::endl;

	for (int i = 0; i < strlen(reverse); i++)
	{
		reverse[0] = oTemp;
		std::cout << reverse[i] << " ";
	}
	std::cout << std::endl;

	for (int i = 0; i < strlen(reverse); i++)
	{
		reverse[3] = eTemp;
		std::cout << reverse[i] << " ";
	}
	std::cout<<std::endl;

	for (int i = 0; i < strlen(reverse); i++)
	{
		reverse[1]=lTemp;
		std::cout << reverse[i] << " ";
	}
	std::cout << std::endl;
}


int main()
{
	
	RevString(reverse);


	system("pause");
	return 0;
}