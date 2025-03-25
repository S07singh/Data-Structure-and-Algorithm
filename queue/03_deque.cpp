#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> q;
    q.push_back(1);
    q.push_back(2);
    q.push_back(3);

    q.pop_back();
    q.pop_front();

    q.push_front(4);
    q.push_back(5);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop_front();
    }
    cout << endl;

    
    return 0;
}