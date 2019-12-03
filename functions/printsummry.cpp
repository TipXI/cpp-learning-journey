#include<iostream>
using namespace std;

void printsummry (int&, int&);

int main()
{
	int x=5, y=10,z;
	
	printsummry (x, y);
	return 0;
}

void printsummry (int &a, int &b)
{
	int c;
	c= a+b;
	cout<< c<< endl;
}
