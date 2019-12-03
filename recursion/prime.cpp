#include <iostream>
using namespace std;
void isPrime(int, int);

int main(){
    int n,prime;
    cout<<"Enter a positive number: ";
    cin>> n;
    isPrime(n, n-1);
    return 0;
}

void isPrime(int n, int div){
    if(div==1)
        cout<< "Yes"<<endl;
    else{
        if(n%div==0)
            cout<< "No"<<endl;
        else
            isPrime(n, div-1);
    }
}
