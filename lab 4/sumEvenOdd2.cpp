// to calculate the sum of odd number and even number
#include <iostream>
using namespace std;
int main()
{
	int Sentinel = 0;
	int num, sumEven=0, sumOdd=0;
	
	cout << "Please enter an integer: (enter 0 to stop) ";
	cin >> num;
	while (num != Sentinel)
	{
		if (num % 2 == 0)
			sumEven = sumEven + num;
		else
			sumOdd = sumOdd + num;	
		cout << "Please enter an integer: (enter 0 to stop) ";
		cin >> num;
	}
	cout << "Sum of even numbers " << sumEven << endl;
	cout << "Sum of odd numbers " << sumOdd << endl;
	return 0;
}
