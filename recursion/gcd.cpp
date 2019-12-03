#include <iostream>
using namespace std;
int gcd(int, int);

int main(){
	int n,m;
	cout<< "Enter 1st number: ";
	cin>> n;
	cout<< "Enter 2nd number: ";
	cin>> m;
	cout<< "Answer is: "<< gcd(m, n)<< endl;
	return 0;
}

int gcd(int m, int n){
	if (m<0||n<0){
		cout<< "Error";
		exit(1);
	}	
	else if (n==m)
	    return m;
	else if (n==1)
	    return 1;
	else if (n>m)
	    return gcd(m, n-m);
	else 
	    return gcd(n, m-n);
}
