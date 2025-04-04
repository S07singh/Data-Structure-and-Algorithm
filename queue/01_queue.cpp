#include<iostream>
#include<vector>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        Node(int val) {
            data = val;
            next = NULL;
        }
};

class Queue {
    
    Node* head;
    Node* tail;
    public:
    Queue() {
        head = NULL;
        tail = NULL;
    }

    void push(int data) {
        Node* newNode = new Node(data);
        if(empty()) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop() {
        if(empty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    int front() {
        if(empty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return head->data;
    }

    bool empty() {
        return head == NULL;
    }

};


int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()) {
        cout << q.front() <<  " ";
        q.pop();
    }
    cout << endl;
    
    return 0;
}