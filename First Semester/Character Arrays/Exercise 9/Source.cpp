#include <iostream>
using namespace std;

char input[100];
int letters;
int numspaces = 0;

int main()
{

	cout << "Input something to see how many words and letters are in it: ";
	cin.getline(input, 100);
	cout << endl;

	for (int i = 0; i <= strlen(input); i++)
	{
		if ((char)input[i] == 32)
			numspaces++;
	}


	letters = strlen(input);
	cout << "There are " << letters << " letters in your input. " << endl;
	cout << "There are " << numspaces + 1 << " words in your input. " << endl << endl;



	system("pause");
	return 0;
}