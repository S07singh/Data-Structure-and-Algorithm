#include<iostream>
using namespace std;
 
int linearSearch (int arr[], int size, int target){
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == target ){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {4, 3, 5, 8, 1, 9, 6};
    int size = 7;
    // int target = 8;
    int target = 67;

    cout<<"linearSearch:" <<linearSearch(arr, size, target)<<endl;
    return 0;
}