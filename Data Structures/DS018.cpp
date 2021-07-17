// Majority element (n/2)

#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
  int n = nums.size(),ans = nums[0], count = 1;
  for(int i=1; i<n; ++i){
    count += ans == nums[i]? 1: -1;
    if(count == 0) {
      ans = nums[i];
      count = 1;
    }
  }
  return ans;
}

int main() {
  int n; cin >> n;
  vector<int> nums(n);

  for(int i=0; i<n; ++i){
    cin >> nums[i];
  }

  cout << majorityElement(nums);
  return 0;
}