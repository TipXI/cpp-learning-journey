#include<iostream>
#include<cmath>
using namespace std;

int min (int & , int & );
void printsummry (int i, int o);

int main()
{
	int x=2, y=3, a=6, b=12, i, o;
	i= pow(x ,y);
	o= min(a, b);
	printsummry (i,o);
	return 0;
}
int min (int &q , int &w )
{
	if (q < w)
        return q;
    else 
        return w;
}
void printsummry (int i, int o)
{
	cout<<"value of pow "<< i<< endl;
	cout<<"value of min "<< o<< endl;
}
