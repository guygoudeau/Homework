#include <iostream>
using namespace std;

void PrintInteger(int variable)
	{
		cout << variable << endl;
	}

int main()
{

	int the_variable = 1;
	PrintInteger(the_variable);
	{
		PrintInteger(the_variable);
		int the_variable = 2;
		PrintInteger(the_variable);
		{
			PrintInteger(the_variable);
			int the_variable = 3;
			PrintInteger(the_variable);
		}
		PrintInteger(the_variable);
	}
	PrintInteger(the_variable);





	system("pause");
	return(0);
}