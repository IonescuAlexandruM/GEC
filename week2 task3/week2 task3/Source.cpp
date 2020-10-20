#include <iostream>

using namespace std;

int main()
{
	char play_again;
cout << "enter y or n"<<endl;
cin >> play_again;
	switch(play_again)
	{
	case 'y':
				cout << "you choose to play again";
			break;
			
	case 'n':
				cout << "you choose to quit, goodbye";
			break;
	default:
		cout << "this is not y or n, please press y or n";
		
	}

}



