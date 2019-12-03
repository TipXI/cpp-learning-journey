#include<iostream>
#include<cmath>

using namespace std;
int total (int x);
int substract (int x);
int multiply (int x);
int add (int x);
int main()
{
	int x=2;
	int a= total(x);
	cout<< "a  " <<a<<endl;
	int b= substract(x);
	cout<< "b  " <<b<<endl;
	int c= multiply(x);
	cout<< "c  " <<c<<endl;
	
	double temp[5];
	for(int i=0; i<5; i++)
	    temp[i]= pow(i,2.0) +2;
	for(int i=0; i<5; i++)
	    cout<< temp[i]<< " ";
	cout<< endl;
	temp[0]= pow(temp[1], 3);
	temp[1]= temp[4]-temp[2];
	temp[2]= temp[0]-5;
	for(int i=0; i<5; i++)
	    cout<< temp[i]<< " ";
	cout<< endl;
	
	double k[5];
	k[0]=3.0;
	k[1]=4.0;
	for(int q=2; q<5; q++)
	{
		k[q]= k[q-1] * k[q-2];
		if(q>3)
		    k[q]= k[q]/4;
	}
	for(int q=0; q<5; q++)
	    cout<< k[q]<< " ";	 
	return 0;
}
int total (int x)
{
	return substract(x) + add(x);
}
int substract (int x)
{
	return multiply(x) - 2;
}
int multiply (int x)
{
	return x*2 + add(x);
}
int add (int x)
{
	return x+2;
}
