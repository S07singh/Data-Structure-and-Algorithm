#include<iostream>
using namespace std;

void printDigits(int n) {
    int count = 0;
    int sum = 0;
    while(n!= 0) {
    int digit = n % 10;
    count++;
    sum += digit;
    cout<<digit<<endl;

    n = n / 10;
    }
    cout<< count <<endl;
    cout<< sum <<endl;
}

int main(){

    int n = 3586;

    printDigits(n);
    
    return 0;
}