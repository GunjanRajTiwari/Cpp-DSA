// Longest increasing subsequence memorization

#include <iostream>
#include <vector>
using namespace std;

#define N 1001

int dp[N];

int lis(vector<int> &v, int n){
  if(dp[n] != -1) return dp[n];

  dp[n] = 1;
  for(int i=1; i<n; ++i){
    if(v[i-1]<v[n-1]) dp[n] = max(dp[n], lis(v, i)+1);
  }

  return dp[n];
}

int main() {
  for(int i=0; i<N; ++i){
    dp[i] = -1;
  }

  int n; cin >> n;
  vector<int> v(n);

  for(int i=0; i<n; ++i){
    cin >> v[i];
  }

  int ans = 0;
  for(int i=1; i<=n; ++i){
    ans = max(ans, lis(v, i));
  }


  cout << ans << '\n';

  return 0;
}