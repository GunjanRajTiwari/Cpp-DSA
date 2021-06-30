// Can Sum / target sum  -> memorization

#include <iostream>
#include <vector>

using namespace std;

vector<int> memo(301, -1);

bool canSum(int n, vector<int> v){
  if(n == 0) return true;
  if(n < 0) return false;

  // check from memorization
  if(memo[n] == 0) return false;
  if(memo[n] == 1) return true;

  for(int i:v){
    if (canSum(n-i, v)){
      memo[n] = 1;
      return true;
    } 
  }

  memo[n] = 0;
  return false;
}

int main(){
  
  vector<int> v;

  v = {7,14};
  cout << canSum(300, v) << '\n';


  return 0;
}