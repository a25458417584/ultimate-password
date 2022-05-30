#include "Player.h"

Player::Player()
{
	setName("John");
	setPoint(0);
	setGuessTimes(1);
}
Player::Player(string name)
{
	setName(name);
	setPoint(0);
	setGuessTimes(1);
}
void Player::setName(string name)
{
	this->name = name;
}
string Player::getName()const
{
	return name;
}
int Player::getPoint()const
{
	return point;
}
void Player::print()
{
	cout << "Player name:" << getName() << ", guessTimes:" << getGuessTimes() << endl;
}
void Player::setPoint(int point)
{
	this->point = point;
}
int Player::getGuessTimes()const
{
	return guessTimes;
}
void Player::setGuessTimes(int)
{
	this->guessTimes = guessTimes;
}
void Player::plusGuessTimes()
{
	setGuessTimes(getGuessTimes() + 1);
}
