#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> m;
    //normal map
    m["tv"] = 100;
    m["mobile"] = 500;
    m["laptop"] = 1500;

    m.insert({"watch", 90});
    m.emplace("camera", 560);
    m.erase("tv");
    
    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<"count="<<m.count("laptop");

    if(m.find("camera") != m.end()){
        cout<<"found\n";
    } else {
        cout<<"not found\n";
    }    

    // multimap
    return 0;
}