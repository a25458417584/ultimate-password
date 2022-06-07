#ifndef Player_H
#define Player_H
#include<iostream>
using namespace std;

class Player
{
public:
	Player();
	Player(string);
	void setName(string);//設定名字
	string getName()const;
	void setGuessTimes(int);//重製猜得次數
	void plusGuessTimes();//每猜一次就++
	int getGuessTimes()const;
	void setFailed(bool);//設定有沒有猜爆
	bool isFailed()const;//判定有沒有猜爆
	void print();
private:
	string name;//名字
	bool failed = false;//設定有沒有猜爆
	int guessTimes;//存取猜得次數
};

#endif // !Player_H

