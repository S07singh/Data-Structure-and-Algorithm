#include<iostream>
#include<queue>
#include<functional> // for greater<int> is functor use for comparison
using namespace std;

int main(){
    priority_queue<int> q;
    q.push(10);
    q.push(5);
    q.push(8);
    while (!q.empty() )
    {
        cout<<q.top()<<endl;
        q.pop(); // it will remove the top element from the queue and return the popped element.
    }
    cout<<endl;
    

    // cout<<q.top()<<endl; // it will print 10
    // q.pop();
    // cout<<q.top()<<endl; // it will print 8

    priority_queue<int, vector<int>, greater<int>> q1;
    q1.push(10);
    q1.push(5);
    q1.push(8);
     while (!q1.empty() )
    {
        cout<<q1.top()<<endl;
        q1.pop(); // it will remove the top element from the queue and return the popped element.
    }

    // cout<<q1.top()<<endl; // it will print 5
    // q1.pop();
    // cout<<q1.top()<<endl; // it will print 8

    return 0;
}