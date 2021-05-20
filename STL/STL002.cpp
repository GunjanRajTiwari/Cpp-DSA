// Maps STL

#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int,int> mp;
    mp.insert({1,100});
    cout << mp[1] << '\n';

    // Program to find the frequency fo all elements
    int n;
    map<int,int> f;
    while(cin >> n){
        if(f.find(n) == f.end()){
            f[n] = 1;
        } else  {
            ++f[n];
        }
    }

    for(auto it: f){
        cout << it.first <<"\t -> \t"<<it.second<<'\n';
    }

    return 0;
}