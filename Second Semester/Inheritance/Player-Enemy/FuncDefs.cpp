#include "Header.h"

void Actor::Update()
{
	Move();
}
void Actor::Move()
{
	std::cout << "Default Move" << std::endl;
}
void Actor::Attack()
{
}
void Player::Input()
{
}
void Player::Move()
{
	std::cout << "Player Move" << std::endl;
}
void Enemy::AI()
{
}

