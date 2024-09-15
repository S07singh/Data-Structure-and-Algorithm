#include<iostream>
using namespace std;

// min of  two nums

int minOfTwo (int a, int  b) { // parameters 
    if (a<b) {
        return a;
    } else {
        return b;
    }
}

int main(){
    cout << "min = "<< minOfTwo(5,3)<<endl; // arguments - it is a actual value
    return 0;
}