// Power of a number

#include <iostream>
using namespace std;

double myPow(double x, int n) {
  if (n == 0) return 1;

  double k = myPow(x, n / 2);
  double ks = k * k;
  if (n % 2 == 0)
    return ks;
  else {
    if (n > 0)
      return x * ks;
    else
      return ks / x;
  }
}

int main() {
  double ans = myPow(5, 3);
  cout << ans;
  return 0;
}
