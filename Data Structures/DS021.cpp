// Rearrange array alternately

#include <iostream>

using namespace std;

void rearrange(int *arr, int n) {
  int minpos = 0, maxpos = n - 1, mod = arr[n - 1] + 1;
  for (int i = 0; i < n; ++i) {
    if (i % 2 == 0) {
      arr[i] += (arr[maxpos] % mod) * mod;
      --maxpos;
    } else {
      arr[i] += (arr[minpos] % mod) * mod;
      ++minpos;
    }
  }
  for (int i = 0; i < n; ++i) {
    arr[i] = arr[i] / mod;
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6};
  rearrange(arr, 6);
  for (int i = 0; i < 6; ++i) {
    cout << arr[i] << ' ';
  }
  return 0;
}