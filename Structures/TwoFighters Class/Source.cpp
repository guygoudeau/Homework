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

int hp1;
int hp2;

class Warrior
{
public:
	Warrior(int, int, int, int, int);
	void printStats();

private:
	int hp;
	int energy;
	int attpower;
	int defense;
	int armor;
};

Warrior::Warrior(int h, int e, int at, int d, int ar)
{
	hp = h;
	energy = e;
	attpower = at;
	defense = d;
	armor = ar;
}

Warrior dude(69, 9001, 1, 10, 100);

void Warrior::printStats()
{
	cout << "Warrior's health: " << hp << endl;
	cout << "Warrior's energy: " << energy << endl;
	cout << "Warrior's attack power: " << attpower << endl;
	cout << "Warrior's defense: " << defense << endl;
	cout << "Warrior's armor: " << armor << endl << endl;
	hp2 = hp;
}


class Fighter
{
public:
	Fighter(int, int, int, int, int);
	void printStats();

private:
	int hp;
	int energy;
	int attpower;
	int defense;
	int armor;
};

Fighter::Fighter(int h, int e, int at, int d, int ar)
{
	hp = h;
	energy = e;
	attpower = at;
	defense = d;
	armor = ar;
}

Fighter man(420, 19, 27, 2, 4);

void Fighter::printStats()
{
	cout << "Fighter's health: " << hp << endl;
	cout << "Fighter's energy: " << energy << endl;
	cout << "Fighter's attack power: " << attpower << endl;
	cout << "Fighter's defense: " << defense << endl;
	cout << "Fighter's armor: " << armor << endl << endl;
	hp1 = hp;
}

void avgHealth()
{
	int avehp;
	avehp = (hp1 + hp2) / 2;
	cout << "Average health of Fighter Man and Warrior Dude is " << avehp << endl << endl;
}

int main()
{

	dude.printStats();
	man.printStats();
	avgHealth();

	system("pause");
	return 0;
}