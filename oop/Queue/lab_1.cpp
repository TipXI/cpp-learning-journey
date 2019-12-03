#include <iostream>
#include <queue>

using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    cout << q.front() << endl;
    q.pop();
    q.push(2 * q.back());
    q.push(q.front());
    q.push(5);
    q.push(q.back() - 2);
    queue<int> tempQueue;
    tempQueue = q;
    while (!tempQueue.empty()){
        cout << tempQueue.front() << " ";
        tempQueue.pop();
    }
    cout << endl;
    cout << q.front() << " " << q.back() << endl;
    return 0;
}
