#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int i,x,test[x];
int sum = 0;
double average;
cout<< "enter array size "<< endl;
cin>> i;
cout << fixed << showpoint << setprecision(2);
cout << "Enter five test scores: ";
for (x = 0; x < i; x++)
{
cin >> test[x];
sum = sum + test[x];
}
cout << endl;
average = sum / i;
for (x=0; x<i; x++)
	{
		cout<< "list ["<< x<< "] "<< test[x]<< endl;
	}
cout<< endl;
cout << "The average test score = " << average << endl;
for (x = 0; x < i; x++)
if (test[x] < average)
cout << test[x]
<< " is less than the average test score." << endl;
return 0;
}
