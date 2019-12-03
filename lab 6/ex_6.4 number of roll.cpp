#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int summation (int a, int b);
int main()
{
	int dice, dice1, numofroll=0, num, sum=0;
	srand (time (0));
	cout<< " Enter a number between 2 and 12 "<< endl;
	cin>> num; 
	while (num!= sum ) 
	{
		dice= rand() %6 +1;
		dice1= rand() %6 +1;
		cout<< dice<< "   "<< dice1<< endl;
		sum= summation( dice, dice1);
		numofroll++;
	}
	cout<< " The number of roll is "<< numofroll<< endl;
	return 0;
}
int summation (int a, int b)
{
	int c;
	c= a+b;
	return c;
}
