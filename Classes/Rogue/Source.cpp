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


class Rogue
{
public:
	Rogue(int, int);
	void printStats();

private:
	int hp;
	int energy;
};

Rogue::Rogue(int h, int e)
{
	hp = h;
	energy = e;
}

void Rogue::printStats()
{
	cout << "Rogue's health: " << hp << endl;
	cout << "Rogue's energy: " << energy << endl;
}

int main()
{
	Rogue stats(69, 9001);
	stats.printStats();


	system("pause");
	return 0;
}