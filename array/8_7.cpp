#include<iostream>
#include<iomanip>

using namespace std;

float per (float num_of_votes, float total);

int main()
{
	float num[5] total;
	char a[],b[],c[],d[],e[];
	
	cout<< "Enter the name of the candidates "<< endl;
	cin>> a[]>> b[]>> c[]>> d[]>> e[];
	
	cout<< "Enter the of votes that "<< a[]<< " has received "<<endl;
	cin>> num;
	cout<< "Enter the of votes that "<< b[]<< " has received "<<endl;
	cin>> num1;
	cout<< "Enter the of votes that "<< c[]<< " has received "<<endl;
	cin>> num2;
	cout<< "Enter the of votes that "<< d[]<< " has received "<<endl;
	cin>> num3;
	cout<< "Enter the of votes that "<< e[]<< " has received "<<endl;
	cin>> num4;
	
	total= num+ num1+ num2+ num3+ num4;
	cout<< "candidates  votes received   % of total votes"<<endl;
	cout<< a[]<<setw(15)<< num<<setw(15)<< per(num, total)<<"%"<< endl;
	cout<< b[]<<setw(15)<< num1<<setw(15)<< per(num1, total)<<"%"<< endl;
	cout<< c[]<<setw(15)<< num2<<setw(15)<< per(num2, total)<<"%"<< endl;
	cout<< d[]<<setw(15)<< num3<<setw(15)<< per(num3, total)<<"%"<< endl; 
	cout<< e[]<<setw(15)<< num4<<setw(15)<< per(num4, total)<<"%"<< endl;
} 
float per (float num_of_votes, float total)
{
	float a;
	a= (num_of_votes*100)/total;
	return a;
}
