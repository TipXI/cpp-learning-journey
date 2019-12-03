#include <iostream>
#include "StackType.h"
//#include <stack>

using namespace std;

int main()
{
    stackType<int> a1(50);
	int x,y;
    x=4;
    a1.push(7);
    a1.push(x);
    a1.push(x+5);
    y=a1.top();
    a1.pop();
    a1.push(x+y);
    a1.push(y-2);
    a1.push(3);
    x=a1.top();
    a1.pop();
    cout<<"x= "<< x<<endl;
    cout<<"y= "<< y<<endl;
    while(!a1.isEmptyStack()){
	cout<<a1.top()<<endl;
    a1.pop();
    }
    return 0;
}
