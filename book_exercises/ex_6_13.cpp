#include<iostream>
#include<cmath>

using namespace std;

int secret(int m, int n)
{
int temp = 0;
for (int i = 1; i < abs(n); i++)
temp = temp + i * m;
return temp;
}

int main()
{
	int x=3, z=6;
	cout<< secret(x,z)<< endl;
	return 0;
}



