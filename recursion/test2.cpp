#include <iostream>
using namespace std;

void funcRec(int u, char v) //Line 1
{
    if (u == 0) //Line 2
        cout << v; //Line 3
    else //Line 4
    { //Line 5
        char w; //Line 6
        w = static_cast<char> (static_cast<int>(v) + 1); //Line 7
        funcRec(u - 1, w); //Line 8
    } //Line 9
}

int main(){
    int decimalNum;
    cout << "Enter number in decimal: ";
    cin >> decimalNum;
	funcRec(decimalNum,'A');
    return 0;
}
