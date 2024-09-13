#include<iostream>
#include <vector>
using namespace std;

int main(){

    vector<char>vec {'a', 'b', 'c', 'd', 'e'};

    cout<< "size = " << vec.size() <<endl;

    vec.push_back('f'); // insert in the last 
    cout<< "size after push back = " << vec.size() <<endl;

    vec.pop_back();
    cout<< "size after pop back = " << vec.size() <<endl;

    // for(char val : vec) { // for each loop
    //     cout<< val << endl;
    // }

    cout<<vec.front()<<endl; //a it will print first element 
    cout<<vec.back()<<endl; // e, it will print last element

    cout<<vec.at(0)<<endl; //a
    cout<<vec[0]<<endl; // a

    cout<<vec.at(1)<<endl; // b
    cout<<vec.at(2)<<endl;// c
    cout<<vec.at(3)<<endl; //d

    return 0;
}

