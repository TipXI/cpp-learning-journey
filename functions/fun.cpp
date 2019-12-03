#include<iostream>
using namespace std;

void printsummry (int&, float&);

int main()
{
	int x=5; 
	float y=10.09
	,z;
	
	printsummry (x, y);
	return 0;
}

void printsummry (int &a, float &b)
{
	float c;
	c= a+b;
	cout<< c<< endl;
}
