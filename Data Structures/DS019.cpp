// Subarray with given sum

#include <iostream>
using namespace std;

void subarraySum(int arr[], int n, int s) {
  int total = 0, i = 0, j = 0;
  while (i <= n && j <= n) {
    if (total == s) {
      cout << j + 1 << ' ' << i;
      return;
    }

    if (total < s) {
      if (i == n) break;
      total += arr[i];
      ++i;
    } else {
      if (j == n) break;
      total -= arr[j];
      ++j;
    }
  }

  cout << -1;
}

int main() {
  int arr[] = {1, 2, 3, 7, 5};
  subarraySum(arr, 5, 12);
  return 0;
}