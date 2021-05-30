// LRU cache implementation

#include <iostream>
#include <list>
#include <unordered_map>
#include <iterator>

using namespace std;

class LRUCache {
    list<int> dq;
    unordered_map<int, list<int>::iterator> mp;
    int cacheSize;

    public:
    LRUCache(int n){
        cacheSize = n;
    }

    void refer(int n){
        // cache miss
        if(mp.find(n) == mp.end()) {
            // cache full
            if (dq.size() == cacheSize) {
                int last = dq.back();
                dq.pop_back();
                mp.erase(last);
            }
        } else {
            // cache hit
            dq.erase(mp[n]);
        }

        dq.push_front(n);
        mp[n] = dq.begin();
    }

    // displaying cache
    void display(){
        for(auto i: dq){
            cout << i <<" | ";
        }
        cout << '\n';
    }

};

int main(){
    LRUCache cache(4);

    cache.refer(1);
    cache.refer(2);
    cache.refer(1);
    cache.refer(3);
    cache.refer(4);
    cache.refer(3);
    cache.refer(5);

    cache.display();

    return 0;
}