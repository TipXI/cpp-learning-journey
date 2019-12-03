// to determine whether the number is positive, negative or zero
#include <iostream>
using namespace std;
int main()
{
	int number;
	int status; // 1 for positive & -1 for negative & zero
	
	cout << "Enter a number: "; //prompt user to enter number
	cin >> number; //get a number
	if (number > 0)
		status = 1; //number is positive
	else if (number < 0)
		status = -1; //	number is negative
	else
		status = 0; //number is zero
	if (status == 1)
		cout << "The number is positive";
	else if (status == -1)
		cout << "The number is negative";
	else
		cout << "The number is zero";
	//cout << "Status is " << status; //print status of number
	return 0;
}
