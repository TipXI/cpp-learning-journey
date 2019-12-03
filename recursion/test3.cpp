#include <iostream>
using namespace std;

void recFun(int x)
{
if (x > 0)
{
cout << x % 10 << " ";
recFun(x / 10);
}
else if (x != 0)
cout << x << endl;
}

int main(){
    int decimalNum;
    cout << "Enter number in decimal: ";
    cin >> decimalNum;
	recFun(decimalNum);
    return 0;
}
