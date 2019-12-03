#include<iostream>
#include<stack>
using namespace std;
int factorial(int n){
	stack <int> st;
	st.push(1);
	int m;
	for(int i=2; i<n;i++){
		m= st.top();
		st.pop();
		st.push(m*i);
	}
	while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
    factorial(9);
    return 0;
}
