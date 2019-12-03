#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//int the_power_game (int &, int &, int &);
double the_power_game (double &a, double &b, double &c);
int main()
{
	double num1, num2, num3;
	cout<< "Enter a 3-decimal-number "<< endl;
	cin>> num1;
	cout<< "Enter a 3-decimal-number "<< endl;
	cin>> num2;
	cout<< "Enter a 3-decimal-number "<< endl;
	cin>> num3;
//	cout<< the_power_game (num1, num2, num3)<< endl;
	cout<< the_power_game (num1, num2, num3);
	return 0;
}

//int the_power_game (int &a, int &b, int &c)
//{
//    int s;
//    s= pow((a* b), c);
//    return s;
//}

double the_power_game (double &a, double &b, double &c)
{
    //double m;
    //m= a*(pow(b, c));
    return a*(pow(b, c));
}


