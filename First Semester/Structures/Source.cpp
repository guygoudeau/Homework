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


struct Point2D
{
	float x;
	float y;
};

struct Color
{
	int red;
	int green;
	int blue;
};

struct Player
{
	string name;
	int health;
	int score;
	Point2D position;
	Point2D velocity;
};

struct Shape
{
	Point2D TLcorner;
	Point2D TRcorner;
	Point2D BLcorner;
	Point2D BRcorner;
	Color red;
	Color green;
	Color blue;
};

Player TheGuy = { "The Guy", 100, 0, {1.1f, 2.2f}, {6.9f, 2.7f}};
Shape Rektangle = { {-5.0, 6.0}, {5.0, 6.0}, {-5.0, -6.0}, {5.0, -6.0}, 255, 0, 0 };

void main()
{
	
	cout << "Name: " << TheGuy.name << endl;
	cout << "Health: " << TheGuy.health << endl;
	cout << "Score: " << TheGuy.score << endl;
	cout << "Position: x " << TheGuy.position.x << ", y " << TheGuy.position.y << endl;
	cout << "Velocity: x " << TheGuy.velocity.x << ", y " << TheGuy.velocity.y << endl;


	system("pause");
}