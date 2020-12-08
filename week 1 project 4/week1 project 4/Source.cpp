#include <iostream>
using namespace std;
typedef int cost;
enum CarMake
{
	FORD = 1,
	FIAT,
	TESLA,
	VW,
	BMW,
	ASTONMARTIN,
	HONDA,
	NISSAN,
	TOYOTA,
	AUDI,
	JAGUAR,
	DODGE

};
typedef cost value ;
int main()
{
	
	value mycarcost = 13000;
	CarMake make;
	make = HONDA;
	cout << "The cost of my car is: " << mycarcost << " & My car id is: " << make;
	return 0;
}

