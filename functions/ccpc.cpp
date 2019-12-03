#include <iostream>
#include <iomanip>
#include<limits>
using namespace std;

int main()
{
	int month=1;
	float balance, interest_rate, interest, payment, con_payment, income, ratio;
	cout<< fixed<< showpoint<< setprecision(2);

	cout<< "\t Credit Card Payment Calculator"<< endl<< endl;
	cout<< "Please enter the Credit Card Balance: ";
	cin>> balance;
	while (balance<=0 || cin.fail())
	{
		cout<< balance;
	    cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout<< balance;
		if (balance<0)
			cout<< "The balance should be more than zero \nPlease enter again: ";	
		else
			cout<< "Invalid Input, Try again: ";
		cin>> balance;
	} 
	cout<< "Please enter the Bank Interest Rate: ";
	cin>> interest_rate;
	while (interest_rate<0 || cin.fail())
	{
	    cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');	
		if (interest_rate<0)
			cout<< "The interest rate connot be a negative number \nPlease enter again: ";
		else 
			cout<< "Invalid Input, Try again: ";
		cin>> interest_rate;
	}
	con_payment= balance *0.05;
	cout<< "Please enter the Payment Amount per Month: ";
	cin>> payment;
	while (payment<con_payment || payment>balance || cin.fail())
	{
		cout<< payment;
	    cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		if (payment < con_payment)
		    cout<< "The monthly payment connot be less then "<< con_payment<< "\nPlease enter again: ";	
		else if (payment > balance)	 
			cout<< "The monthly payment connot be more than "<< balance<<"\nPlease enter again: ";
		else 
			cout<< "Invalid Input, Try again: ";
		cin>> payment;
	}
	cout<< "Please enter your monthly income: ";
	cin>> income;
	while (income<0 || cin.fail())
	{
	    cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n'); 
		if (income<0)
			cout<< "The interest rate connot be a negative number \nPlease enter again: ";
		else
		    cout<< "Invalid Input, Try again: ";
		cin>> income;
	}
	do
	{
		interest= interest+(balance*interest_rate)/12;
		balance= balance-payment+(balance*interest_rate)/12;
			
		if (balance > 0)
			cout<< "Month "<< month <<"\t\t your balance: $"<< balance<< endl;
		else 
		    cout<< "Month "<< month <<"\t\t your balance: $0"<< endl;
		month++;	
	}
	while (month<=12 && balance>=0);
    cout<< month<< endl;
	while (balance>=0)
	{
		interest= interest+(balance*(interest_rate+0.03))/12;
		balance= balance-payment+(balance*(interest_rate+0.03))/12;
			
		if (balance > 0)
			cout<< "Month "<< month <<"\t your balance: $"<< balance<< endl;
		else 
		    cout<< "Month "<< month <<"\t your balance: $0"<< endl;
		month++;
	}
    month= month-1;
	cout<< endl<< "Total interest you will pay: "<< interest<< endl;
	cout<< "Number of months to pay off debt: "<< month<< endl;
	ratio= (payment/income)*100;
	cout<< ratio<< endl;
	if (ratio>=30 && month>24)
	    cout<< "Your financial status is very bad"<< endl;
	else if (ratio>=30 && month<=24)
	    cout<< "Your financial status is bad"<< endl;
	else if (ratio<30 || ratio>=20)
	    cout<< "Your financial status is bad"<< endl;
	else if (ratio<20 || ratio>=10)
	    cout<< "Your financial status is moderate"<< endl;
	else if (ratio<10)
	    cout<< "Your financial status is good"<< endl;	
	return 0;
}  
