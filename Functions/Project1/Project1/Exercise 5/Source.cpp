#include <iostream>
#include <cstdlib>
using namespace std;

int CoinToss()
{
	int flip;
	flip = rand() % 2 + 1;

	if (flip == 1)
		cout << "Heads" << endl;
	else
		cout << "Tails" << endl;

	return (flip);
}

int x;

int main()
{

	cout << "How many times do you want to flip the coin: ";
	cin >> x;

	cout << CoinToss() * x;
	cout << endl;


	system("pause");
	return 0;
}