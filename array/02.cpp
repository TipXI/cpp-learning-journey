#include <iostream>

using namespace std;
int main ()
{
	int i;
	int list_A [4],list_B[4], list_C[4];
	cout<< "key in list A "<< endl;
	for (i=0; i<4; i++)
	{
		cout<< "list_A ["<< i<< "]"<< endl;
	    cin>> list_A[i];
	}
	cout<< "you have keyed in "<< endl;
	for (i=0; i<4; i++)
	{
		cout<< "list_A ["<< i<< "] "<< list_A[i]<< endl;
	}
	cout<< "key in list B "<< endl;
	for (i=0; i<4; i++)
	{
		cout<< "list_B ["<< i<< "]"<< endl;
	    cin>> list_B[i];
	}
	cout<< "you have keyed in "<< endl;
	for (i=0; i<4; i++)
	{
	cout<< "list_B ["<< i<< "] "<< list_B[i]<< endl;
    }
	cout<< "list C is  "<<endl;
	for (i=0; i<4; i++)
	{
	    list_C[i]=list_A[i]+ list_B[i];
		cout<< "list_C ["<<i<< "] "<< list_C[i]<< endl;	
	  }  
	return 0;
}

