//Guy Goudeau
//Sep 29, 2015
#include <iostream>
#include <string>
using namespace std;

class Zombie
{
public:
	Zombie(int, int, string);
	int battle();

private:
	int hp;
	int attack;
	string occ;
};

Zombie::Zombie(int h, int a, string o)
{
	hp = h;
	attack = a;
	occ = o;
}


