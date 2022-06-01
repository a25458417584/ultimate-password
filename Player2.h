#pragma once
#ifndef Player_H
#define Player_H
#include <iostream>
using namespace std;

class Player
{
public:
	Player();
	Player(string);
	void setName(string);
	string getName()const;
	void print();
	int getGuessTimes()const;
	void setGuessTimes(int);
	void plusGuessTimes();
private:
	string name;
	int guessTimes;
};
#endif
