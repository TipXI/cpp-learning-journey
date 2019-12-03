// to draw a square 
#include <iostream>
using namespace std;
int main()
{
	int i=1,j,row=5,col=4;
	do
	{
	    j=1;
	        do
		    {
		        if( i==1 || i==row || j==1 || j==col )
		            cout<< "*";
		        else
		            cout<< " ";
		        j++;
		   }
	    while(j<=col);
	    cout<< endl;
	    i++;
    }
    while (i<=row);
}
