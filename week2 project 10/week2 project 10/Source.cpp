#include <iostream>

using namespace std;

int main()
{
	int total = 40, students = 14, remain;
	//how uch does every student get
	cout << "All studens get: " << total / students<<endl;
	//how much remain
	remain = total - ((total / students) * students);
	cout << remain << " packets remain for me";
}
