#include <iostream>
using namespace std;


int main()
{
	char user[50];
	char pass[50];
	bool hasCapital = false;
	bool hasSymbol = false;
	bool hasNumber = false;

	cout << "Enter a username and password. Password must be at least 8 characters, contain \n one capital letter, one number and one symbol. " << endl;
	cout << "Username: ";
	cin.getline(user, 32);
	cout << "Password: ";
	cin.getline(pass, 32);

	//problem: create password
	//criteria:
	/*
	a)must be 8 characters long
	b)must have 1 capital letter
	c)must have 1 number
	d)must have 1 symbol
	
	wtf is 8 long mean -: use strlen
	wtf does it mean to have 1 symbol -: use ASCII 33-47 and/or 58-64
	wtf is 1 capital letter mean -: use ASCII 65-90
	wtf does it mean to have 1 number -: use ASCII 48-57
	*/

	if (strlen(pass) >= 8)
		for (int i = 0; i <= strlen(pass); i++)
		{
			if ((char)pass[i] >= 65 && (char)pass[i] <= 90)
				hasCapital = true;
			if ((char)pass[i] >= 33 && (char)pass[i] <= 47)
				hasSymbol = true;
			if ((char)pass[i] >= 58 && (char)pass[i] <= 64)
				hasSymbol = true;
			if ((char)pass[i] >= 48 && (char)pass[i] <= 57)
				hasNumber = true;		
		}

	if (hasNumber == true && hasSymbol == true && hasCapital == true)
	{
		cout << "Password accepted!" << endl;
	}
	else
		cout << "Password not accepted." << endl;

	

	system("pause");
	return 0;
}