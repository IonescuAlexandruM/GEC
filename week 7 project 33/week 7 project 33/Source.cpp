#include<iostream>
#include<string >
#include<string.h >
#include "Source.h"
using namespace std;


struct personalDetails
{
	int age;
	string name;
	string telephone;
}printDetails;

int main()
{
	cin >> printDetails.age;
	
	getline(cin, printDetails.name);
	getline(cin, printDetails.telephone);
	cout << printDetails.age << endl << printDetails.name << endl << printDetails.telephone << endl;
}