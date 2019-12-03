// programe to roll a dise 100 time and and says how many time each number has been rolled 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int num, n1=0, n2=0, n3=0, n4=0, n5=0, n6=0;
	int i = 0;
	srand(time(0));
	
	while (i<100)
	{
		num = rand() % 6 + 1;
		cout << num << endl;
		
		switch (num)
		{
			case 1: n1++; break;
			case 2: n2++; break;
			case 3: n3++; break;
			case 4: n4++; break;
			case 5: n5++; break;
			case 6: n6++;
		}
		i++;
	}
	
	cout << "1 " << n1 << endl;
	cout << "2 " << n2 << endl;
	cout << "3 " << n3 << endl;
	cout << "4 " << n4 << endl;
	cout << "5 " << n5 << endl;
	cout << "6 " << n6;
	
	return 0;
}

