// to generate random numbers 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int num, i = 0;
	
	srand(time(0));
	while (i < 10)
	{
		num = rand() % 10 + 1;
		cout << num << " ";
		i = i + 1;
	} 
	return 0;
}
