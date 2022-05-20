#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
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
	int PlayerNumber = 0;
	while (!(PlayerNumber == guessNumber))
	{
		cout << "Enter your guess number: ";
		cin >> PlayerNumber;

		if (PlayerNumber < min || PlayerNumber > max)
		{
			cout << "out of range, please Enter again" << endl;
		}
		else
		{
			if (PlayerNumber < guessNumber)
			{
				cout << "Not correct number in :";
				min = PlayerNumber + 1;
				cout << "not correct number , now number range in" << min << "~" << max << endl;
				//player.plusGuessTimes();
			}

			if (PlayerNumber > guessNumber)
			{
				cout << "Not correct number in :";
				max = PlayerNumber - 1;
				cout << "not correct number , now number range in" << min << "~" << max << endl;
				//player.plusGuessTimes();
			}
			if (PlayerNumber == guessNumber)
			{
				//player.plusGuessTimes();
				break;
			}
		}
		player.plusGuessTimes();
	}
}