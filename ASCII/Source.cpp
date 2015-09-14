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
	string words;
	cout << "Give input to be converted to ASCII: ";
	getline(cin, words);
	cout << endl;
	ASCIIconversion(words);
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