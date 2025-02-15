#include<iostream>
using namespace std;

int gcd(int a , int b) {
    while(a> 0 && b > 0) {
        if(a>b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    if(a == 0) { return b; } else {
        return a;
    
}
}
// using recursion 
int gcdRec(int a, int b) {
    if(b == 0) {
        return a;
    }
    return gcdRec(b, a % b);
 }

// lcm
int lcm(int a, int b) { 
    return (a*b) / gcdRec(a, b);
}

int main(){

    cout<< gcd(20, 28) << endl; // 4
    cout<< gcdRec(20, 28) << endl; // 4

    cout<< lcm(20, 28) << endl; // 140
    
    return 0;
}