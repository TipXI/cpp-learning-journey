#include <iostream>
#include "Queue.h"

using namespace std;
int main(){
    queueType<int> queue;
    queue.addQueue(10);
    queue.addQueue(20);
    cout << queue.front() << endl;
    queue.deleteQueue();
    queue.addQueue(2 * queue.back());
    queue.addQueue(queue.front());
    queue.addQueue(5);
    queue.addQueue(queue.back() - 2);
    queueType<int> tempQueue;
    tempQueue = queue;
    while (!tempQueue.isEmptyQueue()){
        cout << tempQueue.front() << " ";
        tempQueue.deleteQueue();
    }
    cout << endl;
    cout << queue.front() << " " << queue.back() << endl;
    return 0;
}
