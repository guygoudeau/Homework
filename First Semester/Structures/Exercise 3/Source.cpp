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



struct Player
{
	string name;
	int score;
};
Player dude;

void CharacterCreate()
{
	cout << "Enter the player's name: ";
	cin >> dude.name;
	cout << "Enter the player's score: ";
	cin >> dude.score;
	cout << endl;
	cout << "Name: " << dude.name << endl;
	cout << "Score: " << dude.score << endl;
	cout << endl;
}

int main()
{
	CharacterCreate();

	system("pause");
	return 0;
}