// Trapping Rain water

#include <iostream>
using namespace std;

int trappingWater(int arr[], int n) {
  int l = 0, r = n - 1, ans = 0;
  int lmax = 0, rmax = 0;

  while (l <= r) {
    if (arr[l] <= arr[r]) {
      if (arr[l] < lmax)
        ans += lmax - arr[l];
      else
        lmax = arr[l];
      ++l;
    } else {
      if (arr[r] < rmax)
        ans += rmax - arr[r];
      else
        rmax = arr[r];
      --r;
    }
  }
  return ans;
}

int main() {
  int n = 10;
  int arr[] = {0, 2, 1, 2, 3, 1, 0, 1, 2, 1};
  cout << trappingWater(arr, n);

  return 0;
}