// to determine whether the number is prime or not
#include <iostream>
using namespace std;
int main ()
{
	int num, div=2;
	bool prime= true;
	cout<< "Enter a number: ";
	cin>> num;
	while (div<= num-1)
	{
		if (num%div== 0)
		    prime= false;
		div++;
	}
	if (prime== true) 
	   cout<< "the number is a prime"<< endl;
	else
	    cout<< "the number is not a prime"<< endl;
	return 0; 			
}
