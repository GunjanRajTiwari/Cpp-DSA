// nth Fibonacci number using memorization O(n)

#include <iostream>
using namespace std;

int fib(int n, int memo[]){
  // Base cases
  if(n <= 2) return 1;
  // With memorization
  if(memo[n]) return memo[n];

  memo[n] = fib(n-1,memo) + fib(n-2,memo);
  return memo[n];
}

int main(){
  int memo[50] = {};
  cout << fib(5,memo) <<'\n';
  cout << fib(7,memo) <<'\n';
  cout << fib(42,memo) <<'\n';

  return 0;
}