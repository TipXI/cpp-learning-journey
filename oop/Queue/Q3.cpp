#include <iostream>
#include "Queue.h"
using namespace std;
int main(){
    queueType<int> queue;
    queue.addQueue(4);
    queue.addQueue(5);
    queue.addQueue(-9);
    queue.addQueue(9);
    queue.addQueue(9);
    queue.addQueue(0);
    queue.addQueue(-7);
    queue.addQueue(1);
    
    cout<< endl<< "after :";
	queueType<int> tempQ;
    while (!queue.isEmptyQueue()){
    	if (queue.front() > 0){
            cout << queue.front() << " ";
            queue.deleteQueue();
        }
        else {
            tempQ.addQueue(queue.front());
            queue.deleteQueue();
        }    
    }
    while (!tempQ.isEmptyQueue()){
        cout << tempQ.front() << " ";
        tempQ.deleteQueue();
    }
    return 0;
}
