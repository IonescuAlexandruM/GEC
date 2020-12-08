#include <iostream>

using namespace std;

int smallestNumber(int a, int b);

int main()
{
	int a, b;
	cout << "Enter 2 numbers at a time: " << endl;
	for (int i = 0; i < 3; i++)
	{
		cin >> a >> b;
		cout <<"The smallest number between "<<a<<" and "<<b<<" is: "<< smallestNumber(a,b) << endl;
	
	}
}

int smallestNumber(int a, int b)
{
	if (a < b)
		return a;
	else return b;
}
