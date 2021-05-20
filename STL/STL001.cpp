// Vectors in C++ STL

#include <iostream>
#include <vector> // for vectors
#include <iterator> // for iterators

using namespace std;

int main(){
    vector<int> v1;
    vector<int> v2(5,1);
    vector<int> v3 = {1,2,3};

    v1.push_back(5);
    v1.push_back(4);
    v1.push_back(3);

    for(auto i: v2) {
        cout << i <<' ';
    }
    cout << '\n';

    vector<int>::iterator it;
    for(it=v1.begin(); it!=v1.end(); ++it){
        cout << *it <<' ';
    }
    cout << '\n';

    cout << v1.size() <<" | "<< v1.capacity() << '\n';
    v1.shrink_to_fit();
    cout << v1.size() <<" | "<< v1.capacity() << '\n';

    cout << v3.empty() <<'\n';

    v3.assign(5,2);
    for(auto i: v3) {
        cout << i <<' ';
    }


    return 0;
}