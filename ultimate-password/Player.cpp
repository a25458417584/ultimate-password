#include "Player.h"

Player::Player()
{
	setName("John");
	setGuessTimes(0);
}

Player::Player(string name)
{
	setName(name);
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

void Player::setGuessTimes(int guessTimes)
{
	this->guessTimes = guessTimes;
}

void Player::plusGuessTimes()
{
	guessTimes++;//guessTimes++
}

int Player::getGuessTimes()const
{
	return guessTimes;
}

void Player::setFailed(bool f)
{
	this->failed = f;
}

bool Player::isFailed()const
{
	return failed;
}

void Player::print()
{
	cout << getName() << ", guessTimes:" << getGuessTimes() << endl;
}