// max sum of non adjacent elements

#include <iostream>
#include <vector>

using namespace std;

int maxSubsetSum(vector<int> arr) {
    int dp[100001] = {};
    int n = arr.size();
    dp[1] = max(arr[0],0);
    for(int i = 2; i <= n; ++i){
        dp[i] = max(arr[i-1]+dp[i-2], dp[i-1]);
    }

    return dp[n];

}

int main(){

  int n;
  cin >> n;
  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
      cin >> arr[i];
  }

  int res = maxSubsetSum(arr);

  cout << res <<'\n';

  return 0;
}