// programe to roll a dise 100 time and and says how many time each number 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
    int cou1= 0,cou2= 0,cou3= 0,cou4= 0,cou5= 0,cou6= 0,x= 0,num;
    while (x < 100)
    {
    	cout << rand() % 6 + 1 <<" "<<endl;
    	num = rand() % 6 + 1 ;
    	{
    	    if (num == 1)
    	        cou1 = cou1 +1;
    	    else if (num == 2)
    	        cou2 = cou2 +1;
    	    else if (num == 3)
    	        cou3 = cou3 +1;
    	    else if(num == 4)
    	        cou4 = cou4 +1;
    	    else if (num == 5)
    	        cou5 = cou5 +1;
    	    else if(num == 6)
    	        cou6 = cou6 +1;  
        }
    	x=x+1;
	}
    cout << "number of 1 is" << cou1<< endl;
    cout << "number of 2 is" << cou2<< endl;
    cout << "number of 3 is" << cou3<< endl;
    cout << "number of 4 is" << cou4<< endl;
    cout << "number of 5 is" << cou5<< endl;
    cout << "number of 6 is" << cou6<< endl;
    return 0; 
} 
