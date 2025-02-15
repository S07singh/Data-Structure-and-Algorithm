#include<iostream>
#include<stack>
using namespace std;

int main(){
    // last in first out [LIFO]
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    stack <int> s2;
    s2.swap(s); //  now s2 has the same number of elements as s and s is empty now

    while(!s2.empty()) {
        cout<<s2.top()<<endl;
        s2.pop(); // removes the top element from the stack
    }
    cout<<endl;

    // cout<<s.top()<<endl; // will print 3
    
    return 0;
}