#include <iostream>
#include<string>
#include<string.h>
#include<random>
#include<time.h>

using namespace std;


int main()
{
	int choice;
	bool endgame = false;
	string computer[3] = {"rock", "paper", "scissors"};
	srand(time(NULL));
	string selection;
	int scoreforPlayer=0, scoreforComputer=0;
	 
	while (endgame == false)
	{

		choice = rand() % 3 + 1;
		cout << "Enter your selection: ";
		getline(cin, selection);
		cout << "You chose: " << selection << endl;
		if (choice == 1)
		{
			cout << "The computer chose: ";
			cout << computer[0] << endl;
		}
		else if (choice == 2)
		{
			cout << "The computer chose: ";
			cout << computer[1] << endl;
		}
		else if (choice == 3)
		{
			cout << "The computer chose: ";
			cout << computer[2] << endl;
		}


		if ((selection == computer[0] && choice == 1) || (selection == computer[1] && choice == 2) ||( selection == computer[2] && choice == 3))
		{
			cout << "It was a draw;" << endl;
		}
		else if ((selection == computer[0] && choice == 2) || (selection == computer[1] && choice == 3 )|| (selection == computer[2] && choice == 1))
		{
			cout << "The computer won this round;" << endl;
			scoreforComputer++;
		}
		else if ((selection == computer[0] && choice == 3) || (selection == computer[1] && choice == 1) || (selection == computer[2] && choice == 2))
		{
			cout << "You won this round;" << endl;
			scoreforPlayer++;
		}
		else cout << "Not working;" << endl;
		cout << "You need: " << 3 - scoreforPlayer << " to complete the game" << endl;
		cout << "The computer needs: " << 3 - scoreforComputer << " to complete the game" << endl;
		if (scoreforComputer >= 3)
		{
			endgame = true;
			cout << "You lost to the computer. Better luck next time!";

		}
		else if (scoreforPlayer >= 3)
		{
			endgame = true;
			cout << "You won to the computer. Congratulations!";
		}
		cout << "******************************************************" << endl;
	}





}