#include<iostream>
#include<cmath>

using namespace std;

void the_3_numbres_game (double &, double &, double &);

int main()
{
	double x, y, z;
	cout<< "Enter the first numbre"<< endl;
	cin>> x;
	cout<< "Enter the second numbre"<< endl;
	cin>> y;
	cout<< "Enter the third numbre"<< endl;
	cin>> z;
	the_3_numbres_game (x, y, z);
	return 0;
}

void the_3_numbres_game (double &a, double &b, double &c)
{
	if (pow(a, b) == c)
	    cout<< "true"<< endl;
	else
	    cout<< "false"<< endl;
}
