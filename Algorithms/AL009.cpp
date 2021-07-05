// Coin Change Tabulation

#include <iostream>
using namespace std;

int coinChange(int amt, int arr[], int n){
  int dp[1001] = {};
  
  for(int i=1; i<=amt; ++i){

    for(int j=0; j<n; ++j){
      int coin = arr[j];

      if(coin<=i){
        if(dp[i]) dp[i] = min(dp[i], dp[i-coin]+1);
        else dp[i] = dp[i-coin] + 1;
      }
    }
  }

  return dp[amt];
}

int main() {
  int arr[] = {1,4,9};
  int n = sizeof(arr)/ sizeof(arr[0]);
  cout << coinChange(12, arr, n) << '\n';
  return 0;
}