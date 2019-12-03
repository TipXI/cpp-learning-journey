#include <iostream>
using namespace std;
int Sum(int);

int main(){
	int n;
	cout<< "Enter a number: ";
	cin>> n;
	cout<< "Answer is: "<< Sum(n)<< endl;
	return 0;
}

int Sum(int n){
	if (n==1)
	    return 1;
	else 
	    return n+Sum(n-1);
}
