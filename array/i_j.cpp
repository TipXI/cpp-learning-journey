#include<iostream>
#include<iomanip>
using namespace std;
int num_of_rows= 4;
int num_of_cols= 3;
int main()
{
	int adel[4] [3]= {{2,3,4},{3,4,6},{8,9,0},{5,3,6}},i,j;
	//cout<< "Enter the number of rows "<< endl;
	//cin>> 
	//cout<< "Enter the number of columns "<< endl;
	//cin>> num_of_cols;
	//for (i=0; i<num_of_rows; i++)
	//{
	//    for(j=0; j<num_of_cols; j++)
	//    	cin>> adel[i] [j];
	//}
	for (i=0; i<num_of_rows; i++)
	{
	    for(j=0; j<num_of_cols; j++)
	    	cout<< setw(num_of_cols)<< adel[i] [j]<<" ";
	    cout<< endl;	
	}
	return 0;
}
