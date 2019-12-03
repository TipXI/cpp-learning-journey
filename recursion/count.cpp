#include <iostream>
using namespace std;
int count_digit(int, int);

int main(){
	int n,m;
	cout<< "Enter a number: ";
	cin>> n;
	cout<< "Enter a number that you want to search for number: ";
	cin>> m;
	cout<< "Answer is: "<< count_digit(n, m)<< endl;
	return 0;
}
int count_digit(int n, int m)
{
	if (n == 0) 
	    return 0;
	if (n % 10 == m) 
	    return 1 + count_digit(n / 10, m);
	else 
	    return count_digit(n / 10, m);
}








