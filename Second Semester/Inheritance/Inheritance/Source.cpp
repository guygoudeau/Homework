#ifndef _SHAPE_H_
#define _SHAPE_H_
#include <iostream>
#include <string>

template <typename T> 
struct Vector3
{
	T x, y, z;
};

class Shape
{
private:
	int Sides;
	std::string Tag;
	Vector3 <float> Pos;
public:
	void Draw();
	void Move(Vector3 <float> Pos);
	Shape();
	~Shape();
};

void Draw()
{

}

#endif // _SHAPE_H_