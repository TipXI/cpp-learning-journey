#include <iostream>
using namespace std;
void count_digit(int);

int main(){
	int n;
	cout<< "Enter a number: ";
	cin>> n;
	count_digit(n);
	return 0;
}
void count_digit(int n)
{
	int count;
	if (n > 0){
		cout<< n % 10<< " ";
	    count_digit(n / 10);
	} 
	else if (n!= 0)
	    cout << n<<" ";
	
}
