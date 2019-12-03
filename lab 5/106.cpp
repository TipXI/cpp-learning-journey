//program to covert fahrenheit to celsius 
#include <iostream>
using namespace std;

int main()
{
	int C,F;
	cout << "program to covert fahrenheit to celsius : inter F ";
	cin >> F;
	C= (F-32)*5/9;
	cout << "celsius is " << C << endl;
	return 0;	
}
