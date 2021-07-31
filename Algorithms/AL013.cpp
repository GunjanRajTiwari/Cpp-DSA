// Euclid gcd

#include <iostream>
using namespace std;

int gcd(int a, int b) {
  if (b == 0) return a;

  if (a > b)
    return gcd(b, a % b);
  else
    return gcd(a, b % a);
}

int main() {
  cout << gcd(9, 15) << '\n';
  cout << gcd(98, 56) << '\n';
  cout << gcd(56, 98) << '\n';
  return 0;
}