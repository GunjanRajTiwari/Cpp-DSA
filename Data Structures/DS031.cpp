// Count target sum subarray

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int subarraySum(vector<int>& nums, int k) {
  unordered_map<int, int> mp;
  mp[0] = 1;
  int total = 0, ans = 0;
  for (int i : nums) {
    total += i;
    ans += mp[total - k];
    ++mp[total];
  }

  return ans;
}

int main() {
  vector<int> v = {1, 1, 1};
  int k = 2;
  cout << subarraySum(v, k);
  return 0;
}