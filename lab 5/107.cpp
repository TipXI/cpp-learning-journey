#include <iostream>

using namespace std;

const int SENTINEL = 0;

int main()
{
int integers = 0;
int sumeven = 0;
int sumodd = 0;

cout << "Enter an integer more than 0: " << endl;
cin >> integers;

while (integers != SENTINEL)
{

    if (integers % 2 == 0)
        sumeven = sumeven + integers;
    else 
        sumodd = sumodd + integers;
    cout << "Enter an integer more than 0: " << endl;
    cin >> integers;
}
cout << "The sum of even integers is: " << sumeven << endl;
cout << "The sum of odd integers is: " << sumodd << endl;
return 0; 
} 
