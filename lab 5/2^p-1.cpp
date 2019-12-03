#include <iostream>
#include <cmath>
using namespace std;
int main ()
{ 
	int p=82589934,num=2,div=2,ss;
	bool prime= true;
	ss=(pow(num,p));
	cout<<ss<<endl;
	for(div=2;div<ss;div++)
	{
		if (((ss-1)%div)== 0)
		{
		    prime= false;
		    break;
		}
		div++;
		ss++;
	}
	if (prime== true) 
	   cout<< "the number is a prime"<< endl;
	else
	    cout<< "the number is not a prime"<< endl;
	return 0; 			
}
