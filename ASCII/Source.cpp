#include <iostream>
#include <string>
using namespace std;

////////////////////////////
//  Can't figure it out?  //
//    Keep on trying!     //
//     Never give up!     //
// Nothing is impossible! //
//  Dont let your dreams, //
//       be dreams.       //
//  DO IT! JUST, DO IT!   //
////////////////////////////

char fname[] = "Guy";
char mname[] = "Christopher";
char lname[] = "Goudeau";
char smiles = 1;

void ASCIIconversion(char stuff[])
{
	for (int i = 0; i < strlen(stuff); i++)
	{
		if (stuff[i + 1] == char(32) || stuff[i + 1] == NULL)
		{
			cout << smiles << " ";
		}
		else
		{
			cout << (int)stuff[i] << " ";
		}
	}
}


int main()
{
	char name[25];
	cout << "Give input to be converted to ASCII: ";
	cin.getline(name, 100);
	cout << endl;
	ASCIIconversion(name);
	cout << endl << endl;

	cout << "Name (Guy Christopher Goudeau) in ASCII: ";
	ASCIIconversion(fname);
	cout << " ";
	ASCIIconversion(mname);
	cout << " ";
	ASCIIconversion(lname);

	system("pause");
	return 0;
}