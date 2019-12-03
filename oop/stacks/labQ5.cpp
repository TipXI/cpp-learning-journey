#include<iostream>
#include<stack>
using namespace std;
int fibonacie(int n){
	stack <int> st;
	st.push(0);
	st.push(1);
	int m,y;
	for(int i=2; i<n;i++){
		m= st.top();
		st.pop();
		y=st.top();
		st.push(m);
		st.push(m+y);
	}
	while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
    fibonacie(8);
    return 0;
}
