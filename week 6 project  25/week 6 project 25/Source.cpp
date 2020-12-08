#include <iostream>
#include <string.h>
using namespace std;


int main()
{
	char name[20];
	cout << "Write your initial of your first name, your initial of your middle name, and your entirety of your surname: " << endl;
	cin.getline(name, 20);
	int x = strlen(name);
	cout << name[0] << endl;
	cout << name[2] << endl;
	for (int i = 4; i < x; i++)
		cout << name[i];
	cout << endl;
	
}