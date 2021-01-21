#include <iostream>

using namespace std;

int main() 
{
	int num;
	int& rNum = num;
	cout << "Enter a number:";
	cin >> num;
	cout<<"Num is: " << num << endl;
	rNum += 25;
	cout<<"After calculating the sum, Num is: " << num << endl;
	cout << "Enter another number:";
	cin >> num;
	cout<<"Num is: " << num << endl;
	rNum -= 25;
	cout<<"After calculating the difference, Num is: " << num;
}