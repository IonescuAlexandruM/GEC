#include <iostream>

using namespace std;

int main()
{
	int rain = 1;
	int snow = 2;
	int type, temp;
	cout << "Please, tell me if it's raining(1), or snowing(2)"<<endl;
	cin >> type;
	
	cout << "What temperature, in celsius, is today"<<endl;
	cin >> temp;
	if (type == 1)
	{
		if (temp > 15)
			cout << "Wear a light raincoat";
		else cout << "Wear a thick raincoat";
	}
	else if (type == 2)
	{
		if (temp > 5)
			cout << "Wear something warm";
		else if (temp > 0)
			cout << "Warm up well before wou go";
		else cout << "Stay home";
	}
	else  if (temp > 20)
		cout << "Today will be a sunny day. Have a nice day";
	else if (temp > 5)
		cout << "Today will be a bit cold. Have a nice day";
	else cout << "Today will be cold. Get well dressed. Have a nice day";
}


