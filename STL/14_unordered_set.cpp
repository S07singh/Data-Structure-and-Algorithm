#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(2); // duplicates are not allowed in the unordered_set
    s.insert(4);
    s.insert(5);
    s.insert(5);
    for(auto i : s) {
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}