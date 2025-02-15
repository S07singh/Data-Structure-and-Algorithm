#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> umap;
    // we cannot use same element twice

    // main difference between map and unordered_map is that time complexity is
    // O(1) for unordered_map and O(log n) for map for function like insert, erase and count

    umap["sudhir"] = 40;
    umap["rahul"] = 50;
    umap["rahul"] = 60; // this will not be allowed in unordered_map
    umap["Gunjan"] = 70;

    for(auto p: umap){
        cout<<p.first<<" "<<p.second<<endl;
        }
    
    return 0;
}