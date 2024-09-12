#include<iostream>
using namespace std;

void changedArr(int arr[], int size) { // pass is reference
    cout << "in function\n";
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2*arr [i];
    }
}

int main(){
    int arr[] = {1, 2, 3};

    changedArr(arr, 3); // array is itself a pointer.
    cout<< "in main\n";
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] <<endl;
    }
    cout << endl;
    return 0;
}