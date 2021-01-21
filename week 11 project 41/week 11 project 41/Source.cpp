#include <iostream>
#include<string>
#include<string.h>
using namespace std;

int main()
{
	int choice;

	string Surname, Forename, Adress;
	int	accountNumber, Balance = 0;
	cout << "Choose between:\n1. Open a new account;\n2.View an account;\n3.Close an account\n4.Exit program\nOption:";
	cin >> choice;
	while (choice != 4)
	{
		if (choice == 1)
		{
			while (choice != 4)
			{
				cout << "Choose between:\n 1.General account\n2.Junior account\n3.Savings account\n4.Return to main menu\nOption:";
				cin >> choice;
				if (choice == 1)
				{
					cout << "Please enter your details:";
					cout << "\n Surname:";
					getline(cin, Surname);
					cout << "\n Forename:";
					getline(cin, Forename);
					cout << "\n Adress:";
					getline(cin, Adress);
					cout << "\n Your account has been created: \nType of account: ";
					if (choice == 1)
						cout << "General account";
					else if (choice == 2)
						cout << "Junior account";
					else if (choice == 3)
						cout << "Savings account";

					cout << "\nWith the name: " << Surname << " " << Forename << "\nOn the adress " << Adress;
					return 0;
				}
				else if (choice == 2)
				{
					cout << "Please enter your details:";
					cout << "\n Surname:";
					getline(cin, Surname);
					cout << "\n Forename:";
					getline(cin, Forename);
					cout << "\n Adress:";
					getline(cin, Adress);
					cout << "\n Your account has been created: \nType of account: ";
					if (choice == 1)
						cout << "General account";
					else if (choice == 2)
						cout << "Junior account";
					else if (choice == 3)
						cout << "Savings account";

					cout << "\nWith the name: " << Surname << " " << Forename << "\nOn the adress " << Adress;
					return 0;
				}
				else if (choice == 3)
				{
					cout << "Please enter your details:";
					cout << "\n Surname:";
					getline(cin, Surname);
					cout << "\n Forename:";
					getline(cin, Forename);
					cout << "\n Adress:";
					getline(cin, Adress);
					cout << "\n Your account has been created: \nType of account: ";
					if (choice == 1)
						cout << "General account";
					else if (choice == 2)
						cout << "Junior account";
					else if (choice == 3)
						cout << "Savings account";
					cout << "\nWith the name: " << Surname << " " << Forename << "\nOn the adress " << Adress;
					return 0;
				}
			}
		}


		else if (choice == 2)
		{
			cout << "\nEnter your account number: ";
			cin >> accountNumber;
			cout << "For this account number " << accountNumber << " you have: \nSurname: " << Surname << ";\nForename: " << Forename << ";\nAdress: " << Adress << ";\nBalance: " << Balance;
			return 0;
		}
		else if (choice == 3)
			cout << "Enter your account number:";
		cin >> accountNumber;
		cout << "\nYour account with the number: " << accountNumber << " has been closed" << endl;
		return 0;
	}
	if (choice == 4)
	{
		cout << "Good bye";
		return 0;
	}
}