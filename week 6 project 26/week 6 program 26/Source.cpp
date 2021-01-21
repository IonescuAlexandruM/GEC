#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	string sentence;
	
	cout << "Enter a sentence: " << endl;
	getline(cin, sentence);
	int x=sentence.size();
	cout << x;
	cout <<"Sentence now: "<< sentence<<endl;
	int position;
	
	for (int i = 0; i < x; i++)
	{
		if (sentence[i] == 'e')
		{
			position = sentence.find("e");
			sentence.replace(position, 1, "x");
		}
		if (sentence[i] == '\0')
			break;
	}

	cout << "Sentence after:" << sentence << endl;

}