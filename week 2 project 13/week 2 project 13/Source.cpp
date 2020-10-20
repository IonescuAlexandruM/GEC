#include <iostream>

using namespace std;

int main()
{
	int game;
	char type;
	cout << "Please tell me if you are a student(s), or a teacher(t)" << endl;
	cin >> type;

	
	if (type == 's' or type == 't')
	{
		cout << "Which game would you like(1 or 2)" << endl;
		cin >> game;
		if (game == 1)
			cout << "You get 20% discount";
		else if (game == 2)
			cout << "You get 10% discount";
		else cout << "We don't have discounts for this game";

	}
	else cout << "Sorry, but you don't have discount";
}