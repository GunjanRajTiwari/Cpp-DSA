// Array: Plus one
// You can also reverse the array for better performance

#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n, temp; cin >> n;
  vector<int> A;
  A.reserve(n+1);
  for(int i=0; i<n; ++i){
    cin >> temp;
    A.push_back(temp);
  }

  int carry = true;
  while(carry && n){
    carry=false;
    --n;
    ++A[n];
    if(A[n]==10){
      carry = true;
      A[n] = 0;
    }
  }

  if(carry){
    A.insert(A.begin(),1);
  }
  while(*A.begin() == 0) A.erase(A.begin());

  for(auto i: A){
    cout << i <<' ';
  }
  return 0;
}