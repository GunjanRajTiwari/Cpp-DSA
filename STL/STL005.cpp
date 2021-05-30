#include <iostream>
#include <list>

using namespace std;

int main(){

    list<int> ls;
    ls.push_back(2);
    ls.push_back(4);
    ls.push_front(3);
    ls.push_front(1);

    //same for pop

    for(auto i: ls){
        cout << i <<' ';
    }
    cout << '\n';

    cout << "front: "<< ls.front() <<'\n';
    cout << "back: "<< ls.back() <<'\n';

    ls.reverse();
    for(auto i: ls){
        cout << i <<' ';
    }
    cout << '\n';
    
    ls.sort();
    for(auto i: ls){
        cout << i <<' ';
    }

    return 0;
}