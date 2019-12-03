#include <iostream>
using namespace std;

int x,y,z;
void try1();
int main()
{
	int x,z;
	x=7;y=5;
	cout<<"main x "<<x<<endl;
	cout<<"main y "<<y<<endl;
	try1();
	cout<<"main y after try1 "<<y<<endl;
	z=x+y;
	cout<<"main z "<<z<<endl;
    return 0;
 } 
 
 void try1()
 {
 	int z;
	x=2;
    y=x+1;
    z=x+y;
 	cout<<"x in try1 "<<x<<endl;
 	cout<<"y in try1 "<<y<<endl;
 	cout<<"z in try1 "<<z<<endl;
 }
