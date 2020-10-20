#include <iostream>
using namespace std;

int main()
{
	int n;
	char see='Y';
	
	cout << "Please enter a number 0<n<11: " << endl;
	cin >> n;
	int i, j;
	
	
	for (i = 0; i < n; i++)

	{
		for (j = 0; j <= i; j++)
			cout << '*' << " ";
		cout << endl;
	}
	cout << "Do you want to give it another try, Y or N: ";
		cin >> see;
		if (see == 'Y')
			while (see == 'Y')

			{
				cout << "Please enter a number 0 < n < 11: " << endl;
				cin >> n;
				int i, j;
				for (i = 0; i < n; i++)

				{
					for (j = 0; j <= i; j++)
						cout << '*' << " ";
					cout << endl;
				}
				cout << "Do you want to give it another try, Y or N: ";
				cin >> see;
			}
		else if (see == 'N')
			cout << "Goodbye";
		else cout << "You typed in something else";
}


