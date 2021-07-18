// Merge sorted list inplace

#include <algorithm>
#include <iostream>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m) {
  int i = 0, j = 0, k = n - 1, temp;
  while (i < n && j < m) {
    if (arr1[i] > arr2[j]) {
      temp = arr1[k];
      arr1[k] = arr2[j];
      arr2[j] = temp;
      ++j;
      --k;
    } else {
      ++i;
    }
  }

  sort(arr1, arr1 + n);
  sort(arr2, arr2 + m);

  for (int i = 0; i < n; ++i) {
    cout << arr1[i] << ' ';
  }
  for (int i = 0; i < m; ++i) {
    cout << arr2[i] << ' ';
  }
}

int main() {
  int arr1[] = {0, 3, 5, 8, 9};
  int arr2[] = {1, 2, 4, 6, 7};
  merge(arr1, arr2, 5, 5);
  return 0;
}