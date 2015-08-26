#include <iostream>
using namespace std;

int main()
{
		char user[50];
		char pass[50];
		char realpass[] = "P@55w0rd";
		char hyphen[] = "-";
		bool usr = false;



		cout << "Enter a username. Must contain usr in it." << endl << endl;
		cout << "Username: ";
		cin.getline(user, 32);
		for (int i = 0; i <= strlen(user); i++)
		{
			if ((char)user[i] == 117 && (char)user[i + 1] == 115 && (char)user[i + 2] == 114)
				usr = true;
		}
		if (usr == true)
		{
			cout << "Username accepted! " << endl << endl;
		}
		else if (usr == false)
		{
			cout << "Username not accepted. Program will now exit. " << endl << endl;
			system("pause");
			return 0;
		}


		

		cout << "Enter the correct password. " << endl;
		cout << "Password: ";
		cin.getline(pass, 32);

		strcat_s(user, hyphen);
		strcat_s(user, realpass);

		if (strcmp(pass, realpass) == 0)
		{
			cout << "Password accepted!" << endl << endl;
		}
		else
		{
			cout << "Password not accepted. Program will now exit. " << endl << endl;
			system("pause");
			return 0;
		}



		cout << "User's identifier: " << user << endl << endl;


	system("pause");
	return 0;
}