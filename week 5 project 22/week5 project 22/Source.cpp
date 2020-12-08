#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int num[5], num2[5];
	cout << "enter 5 numbers: " << endl;
	for (int i = 0; i < 5; i++)
		cin >> num[i];
	for (int i = 0; i < 5; i++)
		sort(num,num+5);
	for (int i = 0; i < 5; i++)
	cout << num[i] << " ";
	cout << endl;


	sort(num, num + 5, greater<int>());
	for (int i = 0; i < 5; i++)
		cout << num[i] << " ";
	cout << endl;
	cout << "The largest element is: " << num[0]<<" and the posision of it is: "<<0;
}
