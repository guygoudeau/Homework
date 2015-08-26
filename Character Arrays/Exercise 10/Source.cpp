#include <iostream>
using namespace std;

char word[10];
char tword[10];

int main()
{
	cout << "Input a word to determine if it is a palindrome: ";
	cin >> word;

	int t = 0;
	for (int i = strlen(word)-1; i >= 0; --i)
	{
		tword[t] = word[i];
		t++;
	}
	
	if (strcmp(word, tword) == 0)
	{
		cout << word << " is a palindrome. ";
	}
	else
		cout << word << " is not a palindrome. ";

cout << endl << endl;
	system("pause");
	return 0;
}