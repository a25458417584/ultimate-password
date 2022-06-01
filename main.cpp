#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include"Player.h"
using namespace std;

void play(Player);

void whoWin(Player p1, Player p2);
/*
* {
*		if(p1.isFailed || p2.isFailed)
*		{
*			if(p1.isFailed)
*				cout<<player2 win (string)
*			if(p2.isFailed)
*				cout<<player1 win string
*			if(p1.isFailed==1&&p2.isFailed==1
*				cout<<Draw;
*		}
*		else
*		{
*			if(p1.getGuessTime()>p2.getGuessTime())
*				cout<<player1 win;
*			else if(p1<p2)-->player2 win
*			else -->draw
*		}
* }
*/

int main()
{
	string name1;
	cout << "Enter player1's name: ";
	cin >> name1;
	Player player1(name1);
	playFunction1(player1);

	string name2;
	cout << "Enter player2's name: ";
	cin >> name2;
	Player player2(name2);
	playFunction1(player2);

	

	cout << "Game over" << endl;
}

void playFunction1(Player player)
{
	srand(time(0));
	bool isFinish = 0;

	int max = 100, min = 0;

	int guessNumber = rand() % 101;
	cout << guessNumber << endl;//only for test
	int playerGuessNumber = 0;

	while (!isFinish)//while(isPlayAgain=="y")
	{
		while (!(playerGuessNumber == guessNumber))
		{
			cout << "Enter your guess number(range in " << min << "~" << max << "): ";
			cin >> playerGuessNumber;
			if (playerGuessNumber < min || playerGuessNumber > max)
			{
				cout << "Out of range, please enter again" << endl;
			}
			else
			{
				if (playerGuessNumber < guessNumber)
				{
					min = playerGuessNumber + 1;
					if (min == max)//range in 61~61:
					{
						cout << "Ultimate password is " << min << ", so you failed." << endl;
						isFinish = 1;
						//player.setFailed(true);
						player.plusGuessTimes();
						break;
					}
					else
					{
						cout << "Not ultimate password , please try again." << endl;
						player.plusGuessTimes();
					}
				}

				if (playerGuessNumber > guessNumber)
				{
					max = playerGuessNumber - 1;
					if (min == max)
					{
						cout << "Ultimate password is " << max << ", so you failed." << endl;
						isFinish = 1;
						player.plusGuessTimes();
						break;
					}
					else
					{
						cout << "Not ultimate password , please try again." << endl;
						player.plusGuessTimes();
					}
				}
				if (playerGuessNumber == guessNumber)
				{
					cout << "Congratulations! ultimate password is " << guessNumber << endl;
					isFinish = 1;
					player.plusGuessTimes();
				}
			}
		}
	}
	player.print();
}