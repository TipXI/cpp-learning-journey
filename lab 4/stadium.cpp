#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream stadium;
	int price, person;
	int collection = 0;
	int sentinel = 0;
	
	stadium.open("stadium.txt");
	stadium >> price >> person;
	while (price != sentinel)
	{
		collection = collection + (price * person);
		stadium >> price >> person;
	}
	cout << "Total collection is " << collection;
	stadium.close();
	return 0;
}
