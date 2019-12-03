#include <iostream>
using namespace std;

int mystery(int number) //Line 1
{
    if (number == 0) //Line 2
        return number; //Line 3
    else //Line 4
        return (mystery(number + 1) - number); //Line 5
}
int main(){
    int decimalNum;
    cout << "Enter number in decimal: ";
    cin >> decimalNum;
    cout << mystery(decimalNum);
    return 0;
}

  
