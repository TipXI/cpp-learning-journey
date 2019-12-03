#include <iostream>
#include <queue>

using namespace std;
int main(){
    queue<int> q;
    q.push(4);
    q.push(5);
    q.push(-9);
    q.push(9);
	q.push(9);
    q.push(0);
    q.push(-7);
    q.push(1);
    cout<< "before :"; 
    queue<int> tempQueue;
    tempQueue = q;
    while (!tempQueue.empty()){
        cout << tempQueue.front() << " ";
        tempQueue.pop();
    }
    cout<< endl<< "after :";
	queue<int> tempQ;
    while (!q.empty()){
    	if (q.front() > 0){
            cout << q.front() << " ";
            q.pop();
        }
        else {
            tempQ.push(q.front());
            q.pop();
        }    
    }
    while (!tempQ.empty()){
        cout << tempQ.front() << " ";
        tempQ.pop();
    }
    return 0;
}
