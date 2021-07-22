// Array Range update query

#include <iostream>
#include <vector>
using namespace std;

int main() {
  long long int n, q, l, r, val, m, idx;
  cin >> n >> q;
  vector<long long int> diff(n + 1);
  for (long long int i = 0; i < q; ++i) {
    cin >> l >> r >> val;
    diff[l - 1] += val;
    diff[r] -= val;
  }
  vector<long long int> ans(n);
  for (long long int i = 0; i < n; ++i) {
    if (i == 0)
      ans[i] = diff[i];
    else
      ans[i] = diff[i] + ans[i - 1];
  }
  cin >> m;
  while (m--) {
    cin >> idx;
    cout << ans[idx - 1] << '\n';
  }
}

// Input
// 3 4
// 1 1 16
// 1 3 15
// 3 3 16
// 3 3 14
// 2
// 1
// 3

// Expected Output
// 31
// 45