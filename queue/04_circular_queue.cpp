#include<iostream>
using namespace std;

class CircularQueue {
    int* arr;
    int currSize, capacity;
    int front2, rear;

    public:
    CircularQueue(int size) {
        arr = new int[size];
        currSize = 0;
        capacity = size;
        front2 = 0;
        rear = -1;
    }

    void push(int data) { // 
        if (currSize == capacity) {
            cout << "Queue is full" << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = data;
        currSize++;
    }

    void pop() {
        if (empty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        front2 = (front2 + 1) % capacity;
        currSize--;
    }


    int front() {
        if (empty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front2];
    }

    bool empty() {
        return currSize == 0;
    }

    void printArr () {
        for(int i = 0; i < capacity; i++) {
            cout << arr[i] << " ";
        }
        cout<<endl;
    }

};

int main(){
    CircularQueue q(3);

    q.push(1);
    q.push(2);
    q.push(3);
    q.pop();
    q.push(4);

    // q.printArr();
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    
    return 0;
}