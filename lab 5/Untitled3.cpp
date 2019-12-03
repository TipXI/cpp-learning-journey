#include <iostream>
using namespace std;

#include <stdlib.h>
#include <time.h>

int main()
{	
	char alphabets[4] = {'a','b','c','d'};
	char rString[4];

	srand(time(NULL));

	int i=0;
	while(i<4) {
		int temp = rand() % 4;
		rString[i] = alphabets[temp];
		i++;
	}

	for(i=0; i<4; i++)
		cout<<rString[i];

	return 0;
}
