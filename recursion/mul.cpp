#include <iostream>
using namespace std;
int Mul(int, int);

int main(){
	int n,m;
	cout<< "Enter the multiplier: ";
	cin>> n;
	cout<< "Enter the multiplicand: ";
	cin>> m;
	cout<< "Answer is: "<< Mul(m, n)<< endl;
	return 0;
}

int Mul(int m, int n){
//	if (n==0)
//	    return 0;
	if (n==1)
	    return m;
	else 
	    return m + Mul(m, n-1);
}
