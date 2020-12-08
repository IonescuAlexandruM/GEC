#include <iostream>
using namespace std;

int p = 1000, e = 2000;
bool player = true;

void attack(int a);



int main()
{
	int playerChoice;
	char playagain;
	while (player)
	{

		cout << "Choose between: 1.Use sword, 2.Use magic, 3.Use axe" << endl;
		cin >> playerChoice;

		cout << "Your choices have different effects..." << endl;
		attack(playerChoice);
		if (e <= 0)
			cout << "You won the game. Congratulations!";
		if (p <= 0)
		{
			cout << "You lost the game. Better luck next time. Do you want to play again? " << endl;
			cin >> playagain;
			if (playagain == 'y')
			{
				p = 1000;
				e = 2000;
			}
			else if (playagain == 'n')
			{
				cout << "Goodbye";
				break;
			}
		}
		if (e <= 0)
		{
			cout << " Do you want to play again? " << endl;
			cin >> playagain;
			if (playagain == 'y')
			{
				p = 1000;
				e = 2000;
			}
			else if (playagain == 'n')
			{
				cout << "Goodbye";
				break;
			}
		}
		if (p > 0 && e > 0)

			cout << "Your health now is: " << p << " and enemy's health is now:" << e << endl;
		else if (p <= 0)
		{
			cout << "Your health is: 0" << endl;
			player = false;
		}
		else if (e <= 0)
		{
			cout << "Enemy's health is: 0" << endl;
			player = false;

		}
	}
}


void attack(int a)
{
	
	const int sward = 300, magic = 650, axe = 450, trollsword = 350, trollmagic = 50, trollaxe = 100;
	switch (a)
	{
		case 1:
		{e = e - sward;
		p = p - trollsword;
		cout << " You have hit a troll but you have been hit by it;" << endl;

		break;
		}
		case 2:
		{	e = e - magic;
		p = p - trollmagic;
		cout << " You have hit a troll but you have been hit by it;" << endl;
		
		break;
		}
		case 3:
		{e = e - axe;
		p = p - trollaxe;
		cout << " You have hit a troll but you have been hit by it;" << endl;
		
		break;
		}
	
		default:
		{	cout << "You have not choose the corect attack option." << endl;
		break;
		}

	}
}

