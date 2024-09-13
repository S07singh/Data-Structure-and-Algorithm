#include<iostream>
#include<vector>
using namespace std;

int main(){
    /*
 Static memory allocation 
 - memory stored at compile time
 - it stored in stack
 - int arr[]

 Dynamic memory allocation 
 - memory stored at run time
 - it stored in heap
 - vector <int> // we can resize vector
*/

    vector<int>vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(1);
    vec.push_back(2);

    cout<<vec.size()<<endl; // 5
    // automatically capacity of vector increases like 4, 8
    cout<<vec.capacity()<<endl; //8

    return 0;
}