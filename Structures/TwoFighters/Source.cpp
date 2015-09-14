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


struct Fighter
{
	int hp;
	int energy;
	int attpower;
	int defense;
	int armor;
};

Fighter dude1;
Fighter dude2;

void createChars()
{
	cout << "Enter first fighter's HP: ";
	cin >> dude1.hp;
	cout << "Enter first fighter's energy: ";
	cin >> dude1.energy;
	cout << "Enter first fighter's attack power: ";
	cin >> dude1.attpower;
	cout << "Enter first fighter's defense: ";
	cin >> dude1.defense;
	cout << "Enter first fighter's armor: ";
	cin >> dude1.armor;
	cout << endl;

	cout << "Enter second fighter's HP: ";
	cin >> dude2.hp;
	cout << "Enter second fighter's energy: ";
	cin >> dude2.energy;
	cout << "Enter second fighter's attack power: ";
	cin >> dude2.attpower;
	cout << "Enter second fighter's defense: ";
	cin >> dude2.defense;
	cout << "Enter second fighter's armor: ";
	cin >> dude2.armor;
	cout << endl;
}

void aveHealth()
{
	int avehp;
	avehp = ((dude1.hp + dude2.hp) / 2);
	cout << "The average health of the two fighters is " << avehp << endl << endl;
}

int main()
{
	
	createChars();
	aveHealth();


	system("pause");
	return 0;
}