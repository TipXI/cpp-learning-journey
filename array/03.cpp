#include <iostream>

using namespace std;

void sum (int a[], int b[], int c[]);

int main ()
{
	int i;
	int list_A [4],list_B[4], list_C[4];
	cout<< "key in list A "<< endl;
	for (i=0; i<4; i++)
	{
		cout<< "list_A ["<< i<< "] : ";
	    cin>> list_A[i];
	}
	cout<< "you have keyed in "<< endl;
	for (i=0; i<4; i++)
		cout<< "list_A ["<< i<< "] : "<< list_A[i]<< endl;
	cout<< "key in list B "<< endl;
	for (i=0; i<4; i++)
	{
		cout<< "list_B ["<< i<< "] : ";
	    cin>> list_B[i];
	} 
	for (i=0; i<4; i++)
		cout<< "list_C ["<< i<< "] : "<< list_C[i]<< endl;
	sum(list_A, list_B, list_C);
	for (i=0; i<4; i++)
		cout<< "list_C ["<< i<< "] : "<< list_C[i]<< endl;	
	return 0;
}
void sum (int a[], int b[],int c[])
{
	int i;
	for (i=0; i<4; i++)
	{
	    c[i]=a[i]+ b[i];
		cout<< "list_C ["<<i<< "] "<< c[i]<< endl;	
	}
}

