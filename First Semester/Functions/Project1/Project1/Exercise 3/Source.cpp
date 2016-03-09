#include <iostream>
using namespace std;

float val1;
float val2;
float val3;

int main()
{

	cout << "Enter value 1: ";
	cin >> val1;
	cout << "Enter value 2: ";
	cin >> val2;
	cout << "Enter value 3: ";
	cin >> val3;
	cout << endl;

	if ((val1 < val2) && (val1 < val3))
	{
		cout << "The smallest number is: " << val1;
	}
	else if ((val2 < val1) && (val2 < val3))
	{
		cout << "The smallest number is: " << val2;
	}
	else if ((val3 < val1) && (val3 < val2))
	{
		cout << "The smallest number is: " << val3;
	}
	cout << endl;


	system("pause");
	return(0);
}