#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main () 
{
//  ofstream outFile;
//  ifstream inFile;
  double RATE = 12.50, hoursWorked, wages;
  string name, homeAddress;
  
  cout << "Enter your last name : ";
  getline(cin,name);
  
  cout << "\nEnter your home Address : ";
  getline(cin,homeAddress);
  
  cout << "\nEnter hour work (0 - 70) : ";
  cin >> hoursWorked;
  
  wages = RATE * hoursWorked;
  
  cout << "Name : " << name << endl;
  cout << "Address : " << homeAddress << endl;
  cout << "Pay Rate : $" << RATE << endl;
  cout << "Salary : $" << wages << endl;
  return 0;

}
