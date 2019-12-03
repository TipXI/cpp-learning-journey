#include<iostream>

using namespace std;

void reset (int &, double &, string &);
int main()
{
    int x= 2;
    double y=2;
    string z="yes";
    reset (x, y, z);
}
void reset (int &a, double &b, string &c)
{
    a= 0;
	b= 0;
	c= "";
}
