#include <iostream>

using namespace std;


int main()
{
	int playerLife = 100;
	cout << playerLife << endl;
	int i, dmg;
	for (i = 1; i <= 10; i++)
	{
		cout << "Question " << i << ": How much damage shall I deal?" << endl;
		cin >> dmg;
		playerLife = playerLife - dmg;
		cout << "Player's health is now: " << playerLife << endl;
		if (playerLife <= 0)
		{
			cout << "Early end. Player died!" << endl;
			break;
		}
	}
	if (playerLife > 0)
	{
		cout << "All questions asked. Player survived";
	}
}

