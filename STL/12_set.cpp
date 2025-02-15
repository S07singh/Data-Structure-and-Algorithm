#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    // s.insert(4);
    s.insert(5);
    s.insert(6);

    cout<< " lower bound = " << *(s.lower_bound(4)) << endl;
    // should not be less than key 
    // lower bound function return value if that value is in it or it return greater than value or if greater value do not exist then it 
    // return s.end() if not found

    cout<< " upper bound = " << *(s.upper_bound(4)) << endl;
   // upper bound function return value greater than key 


// duplicate value ignore in set, it doesn't matter actually it do not store in sets
    // s.insert(1);
    // s.insert(2);
    // s.insert(3);


    for(auto val : s) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}