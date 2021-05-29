// Queue

#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> que;

    que.push(1);
    que.push(2);
    que.push(3);
    que.push(4);
    que.push(5);

    que.pop();
    while(!que.empty()){
        cout << que.front() << "\n---\n";
        que.pop();
    }

    return 0;
}