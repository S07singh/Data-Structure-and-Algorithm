#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> vec;

    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // vec.push_back(4);
    // vec.push_back(5);
    // vec.emplace_back(6);

    // vector<int> vec1 {1, 2, 3, 4, 5, 6};
    vector<int> vec {1, 2, 3, 4, 5, 6};

    // vector<int> vec(3, 10);// size is 3 and value is 10 and 10 three times
    // this syntax is very useful for dynamic programming
    // vector<int> vec(vec1);

    // cout<<vec.size()<<endl;
    // cout<<vec.capacity()<<endl;
    // vec.pop_back();

    // vec.erase(vec.begin()); // it will remove first element of array
    // vec.erase(vec.begin() + 2); // remove index no. 2
    // vec.erase(vec.begin(), vec.begin() + 2); // remove first 2 elements

// erase and clear function only changes size not capacity

    vec.insert(vec.begin() + 2, 100); // 1, 2, 100, 3, 4, 5, 6
    vec.clear(); // it will remove all elements of array
    for(int val:vec) {
        cout<<val<<" ";
    }
    cout<<endl;

    cout<< "val at idx 2:"<< vec[2] << " or "<< vec.at(2)<<endl;
    cout<< "front"<< vec.front()<<endl;
    cout<< "back"<< vec.back()<<endl;
    cout<< "is empty"<< vec.empty(); // it use for checking array is empty or not empty , it will return 1 if 
    // array is not empty and 0 otherwise
    // cout<<vec.size()<<endl;
    // cout<<vec.capacity()<<endl;
    return 0;
}