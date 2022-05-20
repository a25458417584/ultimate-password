#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand(time(0));

	string name;
	cout << "Enter your name: ";
	cin >> name;

	int guessNumber = rand() % 101;
	int PlayerNumber;
	while (!(PlayerNumber == guessNumber))
	{
		//if guessnumber=50
		//cin 85-->cout not correct, number in 0~84
		//cin 20-->cout not correct, number in 21~84
	}

}