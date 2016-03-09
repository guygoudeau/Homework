#include <iostream>
using namespace std;

int numbah = 0;
int* datNumbahTho;


int main()
{

	cout << numbah << endl;

	datNumbahTho = &numbah;
	*datNumbahTho = 69;

	cout << numbah << endl;
	cout << datNumbahTho << endl;
	cout << *datNumbahTho << endl;


	system("pause");
	return 0;
}