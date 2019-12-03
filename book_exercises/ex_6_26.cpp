#include <iostream> 

using namespace std;
 
void the_now_sum (int &sum , int &testscore); 
int main()
{
	int sum= 1, testscore= 2;
	cout<< "s"<< sum<< endl;
	the_now_sum ( sum, testscore );
	cout<< "s"<< sum<< endl;
}

void the_now_sum (int &sum, int &testscore)
{
	sum= sum+testscore;
}
