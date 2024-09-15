#include<iostream>
using namespace std;

int main(){
    int a = 4, b = 8;

    cout<<(a & b)<<endl; // 0 AND operator first convert int into binary number than take AND operator 
    cout<<(a | b)<<endl; // 12 OR operator first convert int into binary number than take OR operator
    cout<<(a ^ b)<<endl; // 12 XOR operator
    // XOR operator -> same same will be 0 and different will be 1

    cout<<(6 & 10)<<endl; // 2
    cout<<(6 | 10)<<endl; // 14
    cout<<(6 ^ 10)<<endl; // 12
  
    cout<<(10<<2)<<endl; // 40
    cout<<(10>>2)<<endl; // 2
    cout<<(10>>1)<<endl; // 5
    return 0;
}

//         0 1 0 0      0 1 0 0      0 1 0 0 
//         1 0 0 0      1 0 0 0      1 0 0 0
//      &  _______    | _______     ^________
//         0 0 0 0      1 1 0 0      1 1 0 0


 // Bitwise << left shift operator
    //  (10 << 2) -> first convert into binary than shift 2 in left 10-> binary (1 0 1 0) after shift (1 0 1 0 0 0) = 40
    // Formula -> a << b = a * 2^b


 // Bitwise >> right shift operator
    //  (10 >> 2) -> first convert into binary than shift 2 in right 10-> binary (1 0 1 0) after shift (0 0 1 0) = 2
    // Formula -> a >> b = a / 2^b

    // Question 1. Figure out how to find if a number is power of 2 without any loop.
    // Question 2. Write a function to reverse an integer n.