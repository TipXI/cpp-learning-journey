#include <iostream>
using namespace std;

int smallestIndex(int [], int);

int main()
{
	int test[50] = {1,5,3,1,2,-1,5,6,-1,3};
	
	cout << smallestIndex(test,10) << endl;
}

int smallestIndex(int test[], int size)
{
	int min = test[0];
	int smallestIdx = 0;
	
	for(int i=1; i < size; i++)
	{
		if(test[i] <= min)
		  {
		  	min = test[i];
		  	smallestIdx = i;
		  }
	}
	return smallestIdx;
}
