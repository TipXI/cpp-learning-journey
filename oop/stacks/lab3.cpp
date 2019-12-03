#include<iostream>
#include<stack>
using namespace std;
void mystery(stack<int> s, stack<int>& t);
int main(){
    int list[]={5, 10, 15, 20, 25};
    stack<int> s1,s2;
    for (int i=0; i<5; i++)
        s1.push(list[i]); //put in 0,1,2,3,4
    mystery(s1,s2);
    while(!s2.empty()){
        cout<<s2.top()<<" "; //display ' 0, 2, 4, 6, 8
        s2.pop();
    }
    cout<<endl;
    return 0;
}

void mystery(stack<int> s, stack<int>& t){
    while(!s.empty()){
        t.push(2*s.top()); //push into s2 ' 8, 6, 4, 2, 0
        s.pop();
    }
}
