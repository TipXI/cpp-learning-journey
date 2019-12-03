#include<iostream>
#include<iomanip>

using namespace std;

void times_3 (float a);

int main()
{
	float x= 3.5678;
	times_3(x);
	return 0;
}

void times_3 (float a)
{
cout<< fixed<< showpoint<< setprecision(2);
cout<< 3 * a<< endl;
}
