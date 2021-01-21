#include <iostream>

using namespace std;

int main()
{
	/*
	int a, b;
	cout << "Please enter 2 numbers: "<<endl;
	cin >> a >> b;
	
	cout << "Sum= "<<sum<<endl;
	int c;
	cout << "Add one more nubmer: " << endl;
	cin >> c;

	cout << "Sum= " << sum + c << endl;*/
	float x, k = 0.0f;
	int sum = 0;
	float avg = 1.0f;
	cout << "Please enter a number: ";
	
	cin >> x;
	sum = sum + x;
	++k;
	if (x != 0)
	{
		avg = sum / k;
	}
	else if (x == 0)
		avg = sum / k;
	cout << "Sum= " << sum << endl;
	cout << "Avg= " << avg << endl;
	

	cin >> x;
	sum = sum + x;
	++k;
	if (x != 0)
	{
		avg = sum / k;
	}
	else if (x == 0)
		avg = sum / k;
	cout << "Sum= " << sum << endl;
	cout << "Avg= " << avg << endl;
	if (x != 0)
	{
		cout << "To stop adding numbers, enter 0" << endl << "Add number: ";
	}

	do
	{
		cin >> x;
		sum = sum + x;
		++k;
		if (x != 0)
		{		
		avg = sum / k;
		}
		cout << "Sum= " << sum << endl;
		cout << "Avg= " << avg << endl; 
		if (x != 0)
		{
			cout <<"To stop adding numbers, enter 0" << endl << "Add number: ";
		}
	} while (x != 0);


}

