#pragma once

struct CellLocation                                                                 // create new struct to determine location of cells
{
	int x;                                                                          // create variable called x
	int y;																			// create variable called y
};

struct Player																		// create new struct for the player
{
	CellLocation position;															// call earlier struct to determine player's position
};