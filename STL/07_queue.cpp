#include<iostream>
#include<queue> // for queue declaration

using namespace std;

int main(){
    // first in first out [FIFO]

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
    // functions are like stack functions , working are  also same.

    return 0;
}