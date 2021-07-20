// Stock buy and sell

#include <iostream>
#include <vector>

using namespace std;

void stockBuySell(vector<int> A, int n) {
  int slow = 0;
  int fast = 1;
  A.push_back(-1);
  vector<vector<int>> ans;
  while (fast < n) {
    if (A[fast] < A[slow]) {
      ++fast;
      ++slow;
      continue;
    }
    if (A[fast + 1] < A[fast]) {
      ans.push_back({slow, fast});
      slow = fast;
    }
    ++fast;
  }
  for (auto i : ans) {
    cout << i[0] << ' ' << i[1] << '\n';
  }
}

int main() {
  vector<int> price = {10, 8, 19, 3, 6, 8, 12, 2, 11, 5};
  stockBuySell(price, 10);
  return 0;
}