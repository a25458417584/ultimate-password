#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include"Player.h"
using namespace std;

int main()
{
	srand(time(0));
	string name;
	cout << "Enter your name: ";
	cin >> name;
	Player player(name);
	int max = 100, min = 0;

	int guessNumber = rand() % 101;
	cout << guessNumber << endl;//only for test, if the code done, this cout will delete
	int PlayerNumber = 0;
	string isPlayAgain = "y";

	cout << "Enter your guess number(range:0~100): ";
	cin >> PlayerNumber;

	while (isPlayAgain == "y")
	{
		while (!(PlayerNumber == guessNumber))
		{
			if (PlayerNumber < min || PlayerNumber > max)
			{
				cout << "out of range, please Enter again" << endl;
			}
			else
			{
				if (PlayerNumber < guessNumber)
				{
					min = PlayerNumber + 1;
					cout << "not correct number , now number range in " << min << "~" << max << endl;
					player.plusGuessTimes();
				}

				if (PlayerNumber > guessNumber)
				{
					max = PlayerNumber - 1;
					cout << "not correct number , now number range in " << min << "~" << max << endl;
					player.plusGuessTimes();
				}
				if (PlayerNumber == guessNumber)
				{
					player.plusGuessTimes();
					break;
				}
			}
			cout << "Enter your guess number(range:" << min << "~" << max << "): ";
			cin >> PlayerNumber;
		}
		player.print();
		
		cout << "Do you want to play again?(yes or no)" << endl;
		cin >> isPlayAgain;

		if (isPlayAgain == "yes")
		{
			min = 0;
			max = 100;
			guessNumber = rand() % 101;
			player.setGuessTimes(0);
			cout << "Enter your guess number(range:" << min << "~" << max << "): ";
			cin >> PlayerNumber;
		}
		if (isPlayAgain == "no")
			break;
	}
	cout << "Game over" << endl;
}
