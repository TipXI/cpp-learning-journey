#include <iostream>
using namespace std;
int main()
{
	int x= 0,occ= 50,rent= 600,main= 27,profit,profit1;
	while(occ>1)
	{
		profit= (occ* rent)-(occ*main);
		if (profit > x)
		    x= profit;
		occ--;
		rent= rent+40;
		profit1=profit;	
	}
	cout<< x<< endl;
	return 0;
}
