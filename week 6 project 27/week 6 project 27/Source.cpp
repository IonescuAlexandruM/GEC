#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	string testString = "Do you know who loves C++ XX does!";
	string name;
	cout << "Enter your name: ";
	getline(cin, name);
      testString.insert(27, name);
	cout << testString << endl;
	testString.replace(26,1, "");
	testString.replace(26 + name.size(),1, "");
	cout << testString << endl;
	string name2;
	cout << "Enter a longer name:" ;
	getline(cin, name2);
	testString.replace(26, name.size(), name2);
	cout << testString << endl;

}