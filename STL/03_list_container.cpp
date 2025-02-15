#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;
    // list<int> l = {1, 2, 3}; // initialization list in c++11
    
    // size, erase, clear, begin, end, insert, rbegin, rend, front, back all these function is also applicable for list also.



    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(0);

    l.pop_back();
    l.pop_front();
    
    for(auto i:l){

         cout<<i<<" ";}

    // major difference between vector and list is list behaves like doubly linked list and vector behaves like dynamic array
    // list is generally slower than vector, but it's suitable for use cases where frequent insertions and deletions are not frequent.
    // vector is faster than list but it's not suitable for use cases where frequent insertions and deletions are frequent.
    // because of doubly linked list it has front function
    return 0;
}