#include <iostream>

using namespace std;
int main()
{
	int i,x;
	double v;
	int sum=0;
	cout<<"array size = ";
	cin>> x;
	int num[x], num2[x];
	for (i=0; i<x; i++)
	{
		cout<<"num["<<i<<"] = ";
	    cin>> num[i];
	}
	for (i=0; i<x; i++)
	    cout<<"num ["<<i<<"] = "<<num[i]<<endl;
	for (i=0; i<x; i++)	
		sum= sum+ num[i];
	cout<< "total = "<<sum<<endl; 
	v=sum/x;
	cout<< "average = " <<v<< endl;
	for (i=0; i<x; i++)
	{
		if (num[i]<v)
		cout<<num[i]<<"is less than average "<<endl;
	}
	for (i=0; i<x; i++)
	    num2[i]= num[i];
	for (i=0; i<x; i++)
	    cout<<"num2 ["<<i<<"] = "<<num2[i]<<endl;
	return 0;
}
