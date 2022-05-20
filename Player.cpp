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
void Player::setGuessTimes(int guessTimes)
{
	this->guessTimes = guessTimes;
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