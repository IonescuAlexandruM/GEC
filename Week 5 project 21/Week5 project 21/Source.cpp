#include <iostream>

using namespace std;

int main()
{
	int num[10], min=9999, x;
	cout << "Enter 10 numbers: " << endl;
	for (int i = 0; i < 10; i++)
		cin >> num[i];
	
	for (int i = 0; i < 10; i++)
	{
		if (num[i] < min)
		{
			min = num[i];
			x = i;
		}
	}
	cout << "The smallest number is: " << min << " and the position of it is: " << x;

}
