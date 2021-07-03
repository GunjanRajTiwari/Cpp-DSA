// Sum of squares Tabulation

#include <iostream>
#include <cstring>
using namespace std;

int dp[10001] = {};

int numSquares(int n) {
  if(dp[n] != -1) return dp[n];

  for(int i=0; i<=n; ++i){
    if(i<4) dp[i] = i;
    else {
      int ways = 5;
      for(int j = 1; j*j<=i; ++j){
        ways = min(ways, dp[i - j*j]+1);
      }
      dp[i] = ways;
    }
  }
    return dp[n];
}

int main(){
  memset(dp,-1,sizeof(dp));
  cout << numSquares(12) << '\n';
  cout << numSquares(257) << '\n';
  return 0;
}