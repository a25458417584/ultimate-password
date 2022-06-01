#include "Player.h"

Player::Player()
{
	setName("John");
	setPoint(0);
}
Player::Player(string name)
{
	setName(name);
	setPoint(0);
	setGuessTimes(0);
}
void Player::setName(string name)
{
	this->name = name;
}
string Player::getName()const
{
	return name;
}
void Player::print()
{
	cout << "Player name:" << getName() << ", guessTimes:" << getGuessTimes() << endl;
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