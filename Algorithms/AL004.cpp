// Grid Traverller with memorization

#include <iostream>
using namespace std;

int gridTraveller(int m, int n, int memo[20][20]) {
  // Base cases
  if(m == 0 || n == 0) return 0;
  if(m == 1 && n == 1) return 1;

  // Memorization case
  if (memo[m][n]) return memo[m][n];
  if (memo[n][m]) return memo[n][m];

  // move down  +  move right
  memo[m][n] =  gridTraveller(m-1, n, memo) + gridTraveller(m, n-1, memo);
  return memo[m][n];
}

int main(){
  int memo[20][20] = {};

  cout << gridTraveller(3,2, memo) <<'\n';
  cout << gridTraveller(12,16, memo) <<'\n';
  return 0;
}