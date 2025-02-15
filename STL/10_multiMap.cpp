#include<iostream>
#include<map>
using namespace std;

int main(){
    multimap<string, int> m;

    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);

    // m.erase("tv"); ti will erase everything
    // m.erase(m.find("tv")); this will erase the first one

    for(auto p: m) {
        cout<< p.first<< " "<< p.second<< endl;
    }
    
    return 0;
}