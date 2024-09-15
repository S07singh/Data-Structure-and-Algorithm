#include<iostream>
#include<vector>
using namespace std;

 // formula for number of sub array --> (n*(n+1))/2
 // if n = 5 
 // then sub array will be 
// 1 12 123 1234 12345 
// 2 23 234 2345 
// 3 34 345 
// 4 45 
// 5 

int main(){

    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    for (int st = 0; st < n; st++){
        for (int end = st; end < n; end++){
            for (int  i = st; i <= end; i++){
                cout <<arr[i];
            }
            cout<< " ";
        }
        cout<<endl;
    }
    
    
    return 0;
}