// Stack

#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> stk;

    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);

    stk.pop();
    while(!stk.empty()){
        cout << stk.top() << "\n---\n";
        stk.pop();
    }

    return 0;
}