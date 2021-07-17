// Wave Array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void wave(vector<int> &A) {
    sort(A.begin(), A.end());
    
    int n, i, j, temp;
    n=A.size();
    i=0;
    j=1;

    while(j<n){
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;

        i+=2;
        j+=2;
    }
}

int main() {
  int n; cin >> n;
  vector<int> A(n);

  for(int i=0; i<n; ++i){
    cin >> A[i];
  }

  wave(A);

  for(int i=0; i<n; ++i){
    cout << A[i] <<' ';
  }

  return 0;
}
