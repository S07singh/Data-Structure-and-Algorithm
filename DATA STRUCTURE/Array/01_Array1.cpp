#include<iostream>
using namespace std;

int main(){
    int size =5;
    int marks[size]; // = {99, 100, 54, 36, 88};

    // marks[0] = 101;
    // cout << marks[0]<<endl;
    // cout << marks[1]<<endl;
    // cout << marks[2]<<endl;
    // cout << marks[3]<<endl;
    // cout << marks[4]<<endl;

    // int size = sizeof(marks) / sizeof(int);
    // cout<<"The size of array :"<<size<<endl;// 5
    
    for (int i=0; i<size; i++){
        cin>>marks[i];
    }
    for (int i=0; i<size; i++){
        cout<<marks[i] <<endl;
    }
    return 0;
}