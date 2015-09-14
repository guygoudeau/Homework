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

string inputname;

struct Player
{
	string name;
	int score;
};

Player dude[4];

void CharacterCreate()
{
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter the player's name: ";
		cin >> dude[i].name;
		cout << "Enter the player's score: ";
		cin >> dude[i].score;
		cout << endl;
		cout << "Name: " << dude[i].name << endl;
		cout << "Score: " << dude[i].score << endl;
		cout << endl;

		
	}
}

void findName()
{
	for (int i = 0; i < 5; i++)
		if (inputname == dude[i].name)
		{
			cout << "Player found. Name: " << dude[i].name << endl;
			cout << "Score: " << dude[i].score << endl;
			break;
		}
		else
		{
			cout << "Player not found." << endl;
			break;
		}
}


int main()
{

	CharacterCreate();

	cout << "Enter a name to be found: ";
	cin >> inputname;

	findName();

	system("pause");
	return 0;
}