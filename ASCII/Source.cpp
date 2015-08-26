#include <iostream>
#include <string>
using namespace std;

////////////////////////////
//  Can't figure it out?  //
//    Keep on trying!     //
//     Never give up!     //
// Nothing is impossible! //
//  Dont let your dreams, //
//     be dreams.         //
//  DO IT! JUST, DO IT!   //
////////////////////////////

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

	system("pause");
	return 0;
}