#include<iostream>

#include<vector>
#include<utility> // for pair declaration
using namespace std;

int main(){
    /*
    // pair<int, int> p = {2, 4};
    // pair<string, int> p = {"sudhir", 4};
    pair<int, pair<int, int>> p = {2, {4,6}};

    cout<<p.first<<endl;
    cout<<p.second.first<<endl;
    cout<<p.second.second<<endl;
*/

    vector<pair <int, int>> v = {{1, 2}, {3, 4}, {5,6} }; //

    v.push_back({7,8});
    v.emplace_back(9,10);

    for(auto p : v){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}