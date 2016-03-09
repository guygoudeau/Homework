//Guy Goudeau
//gg1126
//Oct 12, 2015

struct CellLocation                     // create new struct to determine location of cells
{
	int x;                              // create variable called x
	int y;								// create variable called y
};

struct Player							// create new struct for the player
{
	CellLocation position;				// call earlier struct to determine player's position
};

class Hunter							// create new class called Hunter
{
public:									// public data as follows
	Hunter(int);						// Give Hunter 1 parameter for ammo
	int ammo = 5;						// int ammo given value of 5 meaning Hunter has 5 bullets
	
private:								// no private data
};

Hunter::Hunter(int a)					// hunter constructor
{
	ammo = a;							// ammo = a;
}