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
	void setGuessTimes(int);
	string getName()const;
	int getPoint()const;
	void print();
	void setPoint(int);
	int getGuessTimes()const;
	void setGuessTimes(int);
	void plusGuessTimes();
private:
	string name;
	int point;
	int guessTimes;
	

};
#endif