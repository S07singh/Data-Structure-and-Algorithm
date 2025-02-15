#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool comparator(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;

    if(p1.first<p2.first) return true;
    else return false; // use for sort on basic of second element
}

int main(){
    // int arr[5] =  {3, 4, 5, 2, 8};
    // vector<int> vec = {1, 2, 3, 5 ,8, 4};

    // reverse (vec.begin(), vec.end());

    // sort(arr, arr + 5);

    // sort(vec.begin(), vec.end());
    // // normally this sort ascending order 

    // sort(vec.begin(), vec.end(), greater<int>());
    // // sort in descending order

    // vector<pair<int, int>> vec = {{4, 1}, {3, 2}, {2, 1}, {6, 1}};

    // sort(vec.begin(), vec.end(), comparator);

    // for(auto val : vec) {
    //     cout << val.first << " " << val.second << endl;
    // }
    

    string s = "abc";
    // next_permutation(s.begin(), s.end()); // acb
    prev_permutation(s.begin(), s.end()); // cba

    // swap, min , max some other algorithm

    cout<<s<<endl; 

    // max_element(v.begin(), s.end());
    // min_element(v.begin(), s.end());

    // binary_search(s.begin(), s.end(),target); //
    
    return 0;
}