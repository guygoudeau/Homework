#include <iostream>
using namespace std;

const int numNames = 5;
char names[numNames][50];

int main()
{

	for (int i = 0; i < numNames; i++)
	{
		char name[50];
		cout << "Enter a name: ";
		cin.getline(name, 50);
		for (int j = 0; j < 50; j++)
		{
			names[i][j] = name[j];
		}
	}

	for (int i = 0; i < 5; i++)
	{
		cout << "Name " << i << ": ";
		for (int j = strlen(names[i]); j >= 0; j--)
		{
			cout << names[i][j];
		}
		cout << endl;
	}


	system("pause");
	return 0;
}