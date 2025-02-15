#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vec.begin(); it point to the first element of the vector 
    // vec.end(); it will point to the last + 1 element of the vector means nth element which have garbage value if we deference it 
    // vec.cbegin();
    // vec.cend(); these are the vectors iterator.
    // vec.rbegin(); it will point to the last element of the vector
    // vec.rend(); it will point to the first - 1 element of the vector

    vector<int> vec {1, 2, 3, 4, 5};
    /*
    vector<int>:: iterator it;

    for(it = vec.begin(); it!= vec.end(); it++){
        cout<<*it<<" ";
    } */
    // or we can use auto keyword
    /*
    for(auto it = vec.begin(); it!= vec.end(); it++){
        cout<<*it<<" ";
    }
    */
    // using const_iterator
    /*
    vector<int> :: const_iterator it;


    // using reverse_iterator
    /*
    vector<int> :: reverse_iterator it;

    for(it = vec.rbegin(); it!= vec.rend(); it++){
        cout<<*it<<" ";
    }
    */
    /*
    for(vector<int> :: reverse_iterator it = vec.rbegin(); it!= vec.rend(); it++){
        cout<<*it<<" ";
    }
    */
    for(auto it = vec.rbegin(); it!= vec.rend(); it++){
        cout<<*it<<" ";
    }
    return 0;
}