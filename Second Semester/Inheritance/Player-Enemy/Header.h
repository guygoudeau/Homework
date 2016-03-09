#ifndef _HEADER_H_
#define _HEADER_H_

#include <iostream>
#include <string>

template <typename T>
struct Vector3
{
	T x, y, z;
};

class Actor
{
protected:
	Vector3 <float> Pos;
	int Health;
	int Damage;
	std::string Name;
public:
	void Update();
	virtual void Move();
	void Attack();
};

class Player : public Actor
{
protected:
	int Inventory[10];
public:
	void Input();
	void Move();
};

class Enemy : public Actor
{
protected:
	int LootTable[10];
public:
	void AI();
};

#endif // _HEADER_H_