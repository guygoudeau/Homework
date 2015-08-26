#include <iostream>
#include <string>
using namespace std;

//Declare 10 functions
//return a type you know of

void printManwell()
{
	cout << "manwell ";
}

int sum(int a, int b)
{
	int result = a + b;
	cout << a << " + " << b << " = " << result << endl;
	return result;
}

int quotient(int a, int b)
{
	int result = a * b;
	cout << a << " * " << b << " = " << result << endl;
	return result;
}

int subtraction(int a, int b)
{
	int result = a - b;
	cout << a << " - " << b << " = " << result << endl;
	return result;
}

int dividend(int a, int b)
{
	int result = a / b;
	cout << a << " / " << b << " = " << result << endl;
	return result;
}

void ASCIIconversion(string stuff)
{
	for (int i = 0; i < stuff.length(); i++)
	{
		char x = stuff.at(i);
		cout << int(x) << " ";
	}
}

int main()
{

	sum(20, 5);
	sum(9000, 1);
	quotient(5, 5);
	quotient(6, 9);
	subtraction(6, 9);
	subtraction(15, 15);
	dividend(15, 3);
	dividend(60, 20);


	printManwell();
	cout << endl;
	
	string words;
	cout << "Give input to be converted to ASCII: ";
	getline(cin, words);
	cout << endl;
	ASCIIconversion(words);
	cout << endl << endl;


	system("pause");
	return 0;
}