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
	Player player(name, 0);

	int max = 100, min = 0;

	int guessNumber = rand() % 101;
	int PlayerNumber;
	cout << "Enter your guess number(range:0~100): ";
	cin >> PlayerNumber;
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

		cout << "Enter your guess number: ";
		cin >> PlayerNumber;
	}
	player.print() ;
}