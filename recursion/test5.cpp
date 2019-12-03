#include <iostream>
using namespace std;

int test(int x, int y){
    if (x <= y)
        return y - x;
    else
        return test(x - 1, y + 1);
}
int main(){
    int x,y;
    cout << "Enter number in decimal: ";
    cin >> x;
    cout << "Enter number in decimal: ";
    cin >> y;
	cout<< test(x,y);
    return 0;
}
