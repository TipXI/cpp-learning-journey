#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int main()
{
	int num1,num2,num3,num4,a,b,c,d;
	
	srand (time(0));
	num1= rand () % 10+1;
	num2= rand () % 10+1;
	num3= rand () % 3+1;
	num4= rand () % 4+1;
    
    a=if (num1< num2)
           cout<< num2-num1;
    b=  if (num1< num2)
            cout<< (num2-num1)+2;
    c=  if (num1< num2)
			cout<< (num2-numm1)+1;
	d=  if (num1< num2)
			cout<< (num2-num1)+3  
    cout<< "what is ";
	if (num1< num2)
		cout<< num2<< " - "<< num1<< " ?"<< endl;    		
    cout<< "a)"<< a<<endl;
    cout<< "b)"<< b<<endl;
    cout<< "c)"<< c<<endl;
    cout<< "d)"<< d<<endl;
}
