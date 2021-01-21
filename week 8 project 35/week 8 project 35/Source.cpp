#include <iostream>
using namespace std;

void inputDetails(int* n1, int* n2);
void outputDetails(int& integer1, int& integer2, int* pointer);
int main()
{
	int num1, num2;
	int* pNum = &num1;
	inputDetails(&num1, &num2);
	outputDetails(num1, num2, pNum);
	
}

void inputDetails(int* n1, int* n2)
{
	int num1, num2;
	cin >> num1 >> num2;
	*n1 = num1;
	*n2 = num2;
}
void outputDetails(int& integer1, int& integer2, int* pointer)
{
	cout<<"Num1 value " << integer1 << endl;
	cout<<"Num1 adress " << &integer1 << endl;
	cout<<"Num2 value " << integer2 << endl;
	cout<<"Num2 adress " << &integer2 << endl;
	cout << "pNum value " << pointer << endl;
	cout<<"pNum dereferenced value " << *pointer << endl;
	cout<<"pNum adress in memory " << &pointer << endl;


}