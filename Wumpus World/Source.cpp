//Guy Goudeau
//Due Aug 14, 2015
#include <iostream>                                                                 // calling a library
#include <cstdlib>                                                                  // calling a library
#include "structs.h"
using namespace std;                                                                // using a namespace so you don't have to type std::

Player Robot = { {0, 0} };															// make the player using player struct to start at postion 0,0
CellLocation loc[16];																// create array of 16 cells to use in grid generation

void generateGrid(int rows, int cols, CellLocation c[])								// create new function to actually create the grid
{
	for (int i = 0; i < rows; i++)													// for loop for rows
	{
		for (int j = 0; j < cols; j++)												// for loop for columns
		{
			c[i].x = i;																// Struct CellLocation or c of x is the same as the for loop's i
			c[j].y = j;																// Struct CellLocation or c of y is the same as the for loop's j
			cout << c[i].x << c[j].y << " ";										// output the 4x4 grid
		}
		cout << endl;																// end line
	}
}

int move()																			// create new function to use for moving the player
{
	char dirInput;																	// create a new character variable for input to move
	cin >> dirInput;																// enter the variable
	if (dirInput == 'w')															// if you entered the w key...
	{
		Robot.position.x--;															// x value decrements 
		cout << "You're facing North. ";											// you face north
	}
	if (dirInput == 's')															// if you entered the s key...
	{
		Robot.position.x++;															// x value increments
		cout << "You're facing South. ";											// you face south
	}
	if (dirInput == 'a')															// if you entered the a key...
	{
		Robot.position.y--;															// y value decrements
		cout << "You're facing West. ";												// you face west
	}
	if (dirInput == 'd')															// if you entered the d key...
	{
		Robot.position.y++;															// y value increments
		cout << "You're facing East. ";												// you face east
	}
	cout << "Your position is " << Robot.position.x << Robot.position.y << ". ";	// tells you your x and y position

	if ((Robot.position.x == 2) && (Robot.position.y == 0))							// if you're at a certain position next to a pit
	{
		cout << "You feel a breeze. ";												// it tells you youre next to a pit
	}
	if ((Robot.position.x == 1) && (Robot.position.y == 1))							// ''
	{
		cout << "You feel a breeze. ";												// ''
	}
	if ((Robot.position.x == 2) && (Robot.position.y == 2))							// ''
	{
		cout << "You feel a breeze. ";												// ''
	}

	if ((Robot.position.x == 2) && (Robot.position.y == 1))							// if you find the space with the pit
	{
		cout << "You fell in a pit and died. GAME OVER" << endl;					// it tells you you die
		return 0;																	// and the program terminates
	}

	if ((Robot.position.x == 1) && (Robot.position.y == 3))							// ''
	{
		cout << "You feel a breeze. ";												// ''
	}
	if ((Robot.position.x == 2) && (Robot.position.y == 3))							// ''
	{
		cout << "You fell in a pit and died. GAME OVER" << endl;					// ''
		return 0;																	// ''
	}

	if ((Robot.position.x == 1) && (Robot.position.y == 3))							// ''
	{
		cout << "You feel a breeze. ";												// ''
	}
	if ((Robot.position.x == 0) && (Robot.position.y == 2))							// ''
	{
		cout << "You feel a breeze. ";												// ''
	}
	if ((Robot.position.x == 0) && (Robot.position.y == 3))							// ''
	{
		cout << "You fell in a pit and died. GAME OVER" << endl;					// ''
		return 0;																	// ''
	}


	if ((Robot.position.x == 3) && (Robot.position.y == 0))							// if you're at a certain position next to the wumpus
	{
		cout << "You detect a stench. ";											// it tells you you're next to a wumps
	}
	if ((Robot.position.x == 3) && (Robot.position.y == 2))							// ''
	{
		cout << "You detect a stench. ";											// ''
	}
	if ((Robot.position.x == 3) && (Robot.position.y == 1))							// if you find the wumpus
	{
		cout << "The Wumpus got you! GAME OVER" << endl;							// it tells you you die
		return 0;																	// and the program terminates
	} 
	
	if ((Robot.position.x == 3) && (Robot.position.y == 2))							// if youre in a space next to the gold
	{
		cout << "You see a glitter. ";												// you see a glitter
	}
	if ((Robot.position.x == 3) && (Robot.position.y == 3))							// if you move to the space with the gold
	{
		cout << "You found the gold!\n CONGRATULATIONS, YOU WIN!" << endl;			// you find the gold and you win!
		return 0;																	// the program terminates
	}


	cout << "Move again: ";															// output to tell the player to move again
	move();																			// repeat move function until terminated
}

int main()																			// call your main function
{
	cout << "Welcome to Wumpus World mufugga. Find the cash money baby.\nBe wary of pits and the dreaded Wumpus!" << endl << endl;	//Welcome statement
	generateGrid(4, 4, loc);																			// Arguments of 4 rows, 4 columns, using struct array of 16
	cout << endl;																						// end the line
	cout << "Your position is " << Robot.position.x << Robot.position.y << " facing South."<< endl;		// state beginning position
	cout << "Would you like to go up, down, left, or right? (Use wasd)" << endl;						// choose initial move 
	move();																								// call move function
	
	

	system("pause");																// pause system
	return 0;																		// return 0 and end program
}