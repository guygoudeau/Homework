//Guy Goudeau
//Sep 29, 2015
#include <iostream>
#include <string>
#include <cstdlib>
#include "Header.h"
using namespace std;

int randNum = (rand() % 6) + 1; //random number generator

Zombie zomb1(20, 2, "Janitor");	// define first zombies stats
Zombie zomb2(10, 3, "Astronaut"); //define second zombies stats
Zombie zomb3(15, 1, "Paperboy"); //define third zombies stats

int Zombie::battle() //name the fighting function
{
	for (int i = 0; i < 5; i++) //loop through five times
	{
		if (zomb1.hp <= 0 && zomb2.hp <= 0) //if zombie 1 and 2 are dead
		{
			cout << "The " << zomb3.occ << " zombie is the winner!" << endl; //zombie 3 wins
			return 0; //terminate program
		}
		if (zomb2.hp <= 0 && zomb3.hp <= 0) //if zombie 2 and 3 are dead
		{
			cout << "The " << zomb1.occ << " zombie is the winner!" << endl; //zombie 1 wins
			return 0; //terminate program
		}
		if (zomb1.hp <= 0 && zomb3.hp <= 0) //if zombie 1 and 3 are dead
		{
			cout << "The " << zomb2.occ << " zombie is the winner!" << endl; //zombie 2 wins
			return 0; //terminate program
		}
		if (randNum = 1 && zomb1.hp != 0) //if 1 is generated and zombie 1 isnt dead
		{
			cout << "The " << zomb1.occ << " zombie attacked the " << zomb2.occ << " zombie!" << endl; //zombie 1 attacks zombie 2
			zomb2.hp = zomb2.hp - zomb1.attack; //zombie 2 loses hp equal to zombie 1's attack
			cout << "The " << zomb2.occ << " zombie now has " << zomb2.hp << " health." << endl << endl; //zombie 2 loses health
		}
		if (randNum = 2 && zomb1.hp != 0) //if 2 is generated and zombie 1 isnt dead
		{
			cout << "The " << zomb1.occ << " zombie attacked the " << zomb3.occ << " zombie!" << endl; //zombie 1 attacks zombie 3
			zomb3.hp = zomb3.hp - zomb1.attack; //zombie 3 loses hp equal to zombie 1's attack
			cout << "The " << zomb3.occ << " zombie now has " << zomb3.hp << " health." << endl << endl; //zombie 3 loses health
		}
		if (randNum = 3 && zomb2.hp != 0) //if 3 is generated and zombie 2 isnt dead
		{
			cout << "The " << zomb2.occ << " zombie attacked the " << zomb1.occ << " zombie!" << endl; //zombie 2 attacks zombie 1
			zomb1.hp = zomb1.hp - zomb2.attack; //zombie 1 loses hp equal to zombie 2's attack
			cout << "The " << zomb1.occ << " zombie now has " << zomb1.hp << " health." << endl << endl; //zombie 1 loses health
		}
		if (randNum = 4 && zomb2.hp != 0) //if 4 is generated and zombie 2 isnt dead
		{
			cout << "The " << zomb2.occ << " zombie attacked the " << zomb3.occ << " zombie!" << endl; //zombie 2 attacks zombie 3
			zomb3.hp = zomb3.hp - zomb2.attack; //zombie 3 loses hp equal to zombie 2's attack
			cout << "The " << zomb3.occ << " zombie now has " << zomb3.hp << " health." << endl << endl; //zombie 3 loses health
		}
		if (randNum = 5 && zomb3.hp != 0) //if 5 is generated and zombie 3 isnt dead
		{
			cout << "The " << zomb3.occ << " zombie attacked the " << zomb1.occ << " zombie!" << endl; //zombie 3 attacks zombie 1
			zomb1.hp = zomb1.hp - zomb3.attack; //zombie 1 loses hp equal to zombie 3's attack
			cout << "The " << zomb1.occ << " zombie now has " << zomb1.hp << " health." << endl << endl; //zombie 1 loses health
		}
		if (randNum = 6 && zomb3.hp != 0) //if 6 is generated and zombie 3 isnt dead
		{
			cout << "The " << zomb3.occ << " zombie attacked the " << zomb2.occ << " zombie!" << endl; //zombie 3 attacks zombie 2
			zomb2.hp = zomb2.hp - zomb3.attack; //zombie 2 loses hp equal to zombie 3's attack
			cout << "The " << zomb2.occ << " zombie now has " << zomb2.hp << " health." << endl << endl; //zombie 2 loses health
		}
	}
}

//I can't figure out how to make the program terminate on time. It's supposed to be interrupted if 2 out of 3 zombies have 0 or less than 0 health, output the winner,
// and terminate program. What happens instead is, if looped long enough to where every zombie has less than 0 hp because they keep fighting even when in negative hp,
// all zombies win. I'm not sure how to fix this problem.

int main() //main function
{

	zomb1.battle(); //call battle function

	system("pause"); //pause system
	return 0; //terminate program
}

