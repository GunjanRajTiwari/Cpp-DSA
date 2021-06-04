// O(1) min stack

#include <iostream>
#include <stack>

using namespace std;

class MinStack {
    stack<int> s;
    int minElement;

    public:
    void getMin(){
        if(s.empty()){
            cout <<"Stack is empty. \n";
        } else {
            cout << "Minimum : " << minElement <<'\n';
        }
    }

    void push(int key){
        if(s.empty()){
            minElement = key;
            s.push(key);
            return;
        }

        if(key < minElement){
            s.push(2*key-minElement);
            minElement = key;
        } else {
            s.push(key);
        }
    }

    void pop(){
        if(s.empty()){
            cout <<"Stack is empty. \n";
            return;
        }

        int tos = s.top();
        if (tos < minElement){
            minElement = 2*minElement - tos;
        }
    }

    void peek() {
        if(s.empty()){
            cout <<"Stack is empty. \n";
            return;
        }

        int tos = s.top();
        if(tos < minElement) {
            cout << minElement <<'\n';
        } else {
            cout << tos <<'\n';
        }
    }
};

int main(){
    MinStack ms;
    ms.push(3);
    ms.push(4);
    ms.peek();

    ms.push(2);
    ms.getMin();

    ms.push(1);
    ms.getMin();
    
    ms.push(6);
    ms.peek();

    return 0;
}