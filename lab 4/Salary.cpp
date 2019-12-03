#include<iostream>
using namespace std;

int main()
{
	const double RATE = 12.5;
	string name, homeAddress;
	double hoursWorked, wages;
	cout<<"\nPlease enter your last name: ";
	cin>>name;
	
	cout<<"\nPlease enter your home address: ";
	cin>>homeAddress;
	
	cout<<"\nPlease enter No. of hours worked between 0 to 70: ";
	cin>>hoursWorked;
	while (hoursWorked<0 || hoursWorked > 70)
	{
		cout<<"Wrong value, enter again: ";
		cin>>hoursWorked;
	}
	
	wages = RATE * hoursWorked;
	
	cout<<"\n\n Name:\t\t"<<name;
	cout<<"\n Address:\t"<<homeAddress;
	cout<<"\n Pay Rate:\t$"<<RATE;
	cout<<"\n Hours Worked:\t"<<hoursWorked;
	cout<<"\n Salary:\t$"<<wages;	
	
}
