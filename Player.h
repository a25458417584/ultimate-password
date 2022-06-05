#ifndef Player_H
#define Player_H
#include<iostream>
using namespace std;

class Player
{
public:
	Player();
	Player(string);
	void setName(string);
	string getName()const;
	void setGuessTimes(int);
	void plusGuessTimes();
	int getGuessTimes()const;
	void setFailed(bool);
	bool isFailed()const;
	void print();
private:
	string name;
	bool failed = false;
	int guessTimes;
};

#endif
