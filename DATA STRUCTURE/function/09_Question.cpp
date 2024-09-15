#include<iostream>
using namespace std;

// Question 1

// int  checkPrime (int n) {
//     // int n;
//     if (n % 2 == 0) {
//         cout<< "prime number";
//     } else {
//         cout<< "Not prime number";
//     }
//     return n;
// }

// Question 2

// void printPrime (int num) {
//     int i;
//     cout<<"prime number"<<endl;
//     for ( i = 2; i <= num; i++)
//     { 
//         if (i % 2 == 0)
//         {
//           cout<<i<<endl;  
//         }
         
//     }
    
// }

// Question 3

void fibonacci_series(int n) {
    int a = 0, b = 1, nextTerm;

    // Check if the number of terms is valid
    if (n <= 0) {
        cout << "Please enter a positive integer" << endl;
    } else if (n == 1) {
        cout << "Fibonacci sequence up to " << n << " term: " << endl;
        cout << a << endl;
    } else {
        cout << "Fibonacci sequence: " << endl;
        for (int i = 1; i <= n; ++i) {
            cout << a << " ";
            nextTerm = a + b;
            a = b;
            b = nextTerm;
        }
        cout << endl;
    }
}



int main(){
    
    // cout<< checkPrime(10)<<endl;

    // printPrime(10);

    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    fibonacci_series(n);

    return 0;
}