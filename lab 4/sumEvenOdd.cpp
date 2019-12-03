// to calculate the sum of odd number and even number
#include <iostream>
using namespace std;
int main()
{
	char Continue ='y';
	int num, sumEven=0, sumOdd=0;
	
	while (Continue == 'y'|| Continue =='Y')
	{
		cout << "Please enter an integer: ";
		cin >> num;
		if (num % 2 == 0)
			sumEven = sumEven + num;
		else
			sumOdd = sumOdd + num;
		cout << "Do you want to continue? y/n: ";
		cin >> Continue;
	}
	cout << "Sum of even numbers " << sumEven << endl;
	cout << "Sum of odd numbers " << sumOdd << endl;
	return 0;
}
