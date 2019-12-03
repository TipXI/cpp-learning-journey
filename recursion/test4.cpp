#include <iostream>
using namespace std;

void exercise(int x){
    if (x > 0 && x < 10){
        cout << x << " ";
        exercise(x + 1);
    }
}
int main(){
    int decimalNum;
    cout << "Enter number in decimal: ";
    cin >> decimalNum;
	exercise(decimalNum);
    return 0;
}
