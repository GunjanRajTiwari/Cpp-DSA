// Parentheses Matching

#include <iostream>
#include <stack>

using namespace std;

bool match(char open, char close){
    if(open == '{' && close == '}') return true;
    if(open == '(' && close == ')') return true;
    if(open == '[' && close == ']') return true;
    return false;
}

void parentheses(string ex){
    stack<char> stk;

    for(char c: ex){
        if(c=='}' || c==')' || c==']'){
            if(stk.empty() || !match(stk.top(), c)){
                stk.push(c);
            } else {
                stk.pop();
            }
        } else if(c=='{' || c=='(' || c=='['){
            stk.push(c);
        }
    }

    // Debug
    // while(!stk.empty()){
    //     cout << stk.top() <<' ';
    //     stk.pop();
    // }
    // cout << '\n';

    if(stk.empty()){
        cout << "Matching! \n";
    } else {
        cout << "Not Matching! \n";
    }
}

int main(){
    string ex;
    cin >> ex;

    parentheses(ex);
    parentheses("[(a+b){2a-(a+b)}]");

    return 0;
}