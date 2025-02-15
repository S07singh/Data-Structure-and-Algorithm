#include<iostream>
#include<deque>
using namespace std;

int main(){
    // deque and dequeue
    // double-ended queue - deque
    // dequeue - use for pop out element from queue
    deque<int> d = {1, 2, 3};

    d.push_back(4);
    d.push_front(0);

    cout << "Front element: " << d.front() << endl;
    cout << "Back element: " << d.back() << endl;

    d.pop_back();
    d.pop_front();

    for(int val : d ) {
        cout << val << " ";
    }
    cout<<endl;

    cout<< d[1];
    // this is not possible in list dynamic allocation of elements
    // because list is doubly linked list and deque is dynamic 
    // cout<< l[2]; if we do this in list it will show error.

    return 0;
}   