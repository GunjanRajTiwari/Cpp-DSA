// Sieve of Eratosthenes

#include <iostream>
using namespace std;

#define N 10001

bool prime[N] = {};

void generatePrime() {
  prime[0] = true;
  prime[1] = true;
  for (int i = 2; i * i < N; ++i) {
    if (!prime[i]) {
      for (int j = i * i; j < N; j += i) {
        prime[j] = true;
      }
    }
  }
}

int main() {
  generatePrime();
  int n;
  cin >> n;
  if (prime[n])
    cout << "Not Prime";
  else
    cout << "Prime";
  return 0;
}