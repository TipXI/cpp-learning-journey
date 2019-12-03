#include<iostream>

using namespace std;

int main()
{
int *intList; 
int arraySize= 10;
int i; 
//for (i=0; i<arraySize ;i++)
//    cin>> intList[i];
//for (i=0; i<arraySize ;i++)
//    cout<<"["<< intList[i]<< "]"<< endl;
intList = new int[arraySize];
for (i=0; i<arraySize ;i++)
    cin>> intList[i];
for (i=0; i<arraySize ;i++)
    cout<<"["<< intList[i]<< "]"<< endl;

}
