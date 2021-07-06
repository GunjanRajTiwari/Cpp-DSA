// Longest common subsequence

#include <iostream>
#include <cstring>
using namespace std;

int lcs(char* a, char* b, int m, int n){
  int dp[101][101];

  for(int i=0; i<=m; ++i){
    for(int j=0; j<=n; ++j){

      if(i==0 || j==0){
        dp[i][j] = 0;
      } else if(a[i-1] == b[j-1]){
        dp[i][j] = dp[i-1][j-1] + 1;
      } else {
        dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
      }
    }
  }

  int index = dp[m][n];


  char seq[index+1];
  seq[index] = '\0';
  int i = m, j = n;

  while(i>0 && j>0){
    if(a[i-1] == b[j-1]){
      seq[index-1] = a[i-1];
      --index; --i; --j;
    } else if (dp[i-1][j] > dp[i][j-1]) --i;
    else --j;
  }

  cout << seq << '\n';
  return dp[m][n];
}

int main() {
  char a[] = "ababab";
  char b[] = "dacbdab";

  int m = strlen(a);
  int n = strlen(b);

  cout << lcs(a,b, m, n) << '\n';
  return 0;
}

