#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
	int num,m;
	srand(time(0));
	num=rand()% 10+1;
	
    while (m < 100)
    {    
		num = rand() % 10 + 1 ;
    	cout << rand() % 10 + 1 <<" "<<endl;
    	m++;
    }
    return 0;
}
