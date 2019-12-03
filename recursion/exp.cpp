#include <iostream>
using namespace std;
int exp(int, int);

int main(){
	int n,m;
	cout<< "Enter a number: ";
	cin>> n;
	cout<< "Enter the exponent: ";
	cin>> m;
	cout<< "Answer is: "<< exp(n,m)<< endl;
	return 0;
}

int exp(int n, int m){
	if (m==0)
	    return 1;
	else 
	    return n*exp(n,m-1);
}
