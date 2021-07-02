// How sum -> memorization
// Combination for target sum

#include <iostream>
#include <vector>
#include <map>

using namespace std;

map<int, vector<int>> memo;

vector<int> howSum(vector<int>& nums, int target) {
  if(target<0) return {};
  if(target == 0) return {0};
  if(memo.find(target) != memo.end()) return memo[target];

  for( int i: nums){
    vector<int> result = howSum(nums, target - i);
    if(!result.empty()){
      result.push_back(i);
      memo[target] = result;
      return result;
    }
  }

  memo[target] = {};
  return {};
}

int main(){
  vector<int> question = {14,7};
  vector<int> answer = howSum(question, 280);

  for(int i: answer){
    cout << i << ' ';
  }

  return 0;
}