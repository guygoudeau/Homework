#include <iostream>
using namespace std;

float val1;
float val2;

int main()
{

	cout << "Enter value 1: ";
	cin >> val1;
	cout << "Enter value 2: ";
	cin >> val2;
	cout << endl;

	if (val1 > val2)
	{
		cout << "The smaller number is: " << val2;
	}
	else if (val2>val1)
	{
		cout << "The smaller number is: " << val1;
	}
	cout << endl;


	system("pause");
	return(0);
}