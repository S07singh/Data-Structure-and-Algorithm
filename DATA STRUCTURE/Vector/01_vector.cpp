#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int>vec; //0
    // vector<int>vec = {1, 2, 3}; //3
    // cout<<vec[0]<<endl;
    
    vector<int>vec(5,0);
    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;
    cout<<vec[3]<<endl;
    cout<<vec[4]<<endl;

    return 0;
}