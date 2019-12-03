#include<iostream>
using namespace std;
int main()
{
    int no,rev=0,r,a;
    cout<<"Enter the num: ";
    cin>>no;
    a=no;
    while(no>0)
    {
        r=no%10;
        rev=rev*10+r;
        no=no/10;
    }
    if (rev==a)
        cout<< "the number is palindrome";
    else 
        cout<< "the number is not palindrome";
    return 0;
}
