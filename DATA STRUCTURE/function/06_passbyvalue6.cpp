#include<iostream>
using namespace std;

int sum (int a, int b) {
    a = a + 10; // 15
    b = b + 10; // 14
    return a + b; //29
}

int main(){
    int a = 5, b = 4;
    cout << sum(a,b)<<endl; // pass by value , value of a and b copies there in parameter 
    // that's why value of a and b not change

    cout<< a<<endl; // 5
    cout<< b<<endl; // 4
    return 0;
}