#include <iostream>

using namespace std;

void outputResults(int numofOdd, int oddTotal, int numofEven, int evenTotal);
bool check(int a);
int main()
{
	int a, i, k1 = 0, k2 = 0, t1 = 0, t2 = 0;
	
	for(i=1;i<=10;i++)
	{
		cin >> a;
		if (check(a))
		{
			k2++;
			t2 += a;
		}
		else 
		{
			k1++;
			t1 += a;
		}
	}
	outputResults(k1, t1, k2, t2);
}

bool check(int a)
{
	if (a % 2 == 0)
		return true;
	else return false;
}
void outputResults(int numofOdd, int oddTotal, int numofEven, int evenTotal)
{
	cout << "The number and the sum of odd numbers are: " << numofOdd << " and " << oddTotal << endl << "The number and the sum of even numbers are: " << numofEven << " and " << evenTotal << endl;

}



