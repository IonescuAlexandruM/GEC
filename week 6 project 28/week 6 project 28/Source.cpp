#include <iostream>
#include<string>
#include<string.h>
using namespace std;

int main()
{
	string inventory[3];
	int option;
	cout << "Type which item you wish to keep: Staff or Knife" << endl;
	inventory[0] = "Sword";
	string pick;
	getline(cin, pick);
	inventory[1] = pick;
	cout << "Your inventory holds: " << endl;
	cout << inventory[0] << endl << inventory[1] << endl;
	cout << "Type which item you wish to keep: Healpng potion or Fire spell" << endl;
	getline(cin, pick);
	inventory[2] = pick;
	cout << "Your inventory holds: " << endl;
	cout << inventory[0] << endl << inventory[1] << endl << inventory[2] << endl;
	cout << endl;
	cout << "Your inventory is full!" << endl;
	cout << endl;
	cout << "You have found a magic ring. What would you like to replace in your inventory?" << endl;
	cout << "Choices:" << endl;
	cout << "1: " << inventory[0] << endl;
	cout << "2: " << inventory[1] << endl;
	cout << "3: " << inventory[2] << endl;
	cout << endl;
	
	cin >> option;
	
	if (option == 1)
		inventory[0].replace(0, 10, "Magic ring");
	else if(option==2)
		inventory[1].replace(0, 10, "Magic ring");
	else if (option == 3)
		inventory[2].replace(0, 10, "Magic ring");

	cout << endl << "Inventory is now: " << endl;
	cout << inventory[0] << endl << inventory[1] << endl << inventory[2] << endl;
	cout << endl;
	cout << "You have been robbed!!" << endl;
	cout << "Your inventory is now: \n Empty!\n\n\n\n\n\n\n\n\n\n\n\n";



}