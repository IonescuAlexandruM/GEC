#include <iostream>

using namespace std;

int main()
{
	int Weather_menu;
	cout << "Please choose a menu: 1.Sunny, 2.Cloudy, 3.Raining, 4.Exit"<<endl;
	cin >> Weather_menu;
	switch (Weather_menu)
	{
	case 1:
		cout << "Today will be a sunny day, have a nice day";
		break;
	case 2:
		cout << "Today will be a cloudy day, take care";
		break;
	case 3:
		cout << "Today will be raining all day, get your umbrela";
		break;
	case 4:
		cout << "Goodbye";
		break;
		
	default:
		cout << "Your choice is not here";
		break;
	}
}
