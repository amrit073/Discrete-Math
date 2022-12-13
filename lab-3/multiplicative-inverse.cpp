#include <assert.h>
#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;

// modulo in cpp doesnt give required answer for euclidean calculaiton involving
// negative integers
int euclidean_remainder(int a, int b) {
  int r = a % b;
  b = b > 0 ? b : -b;
  return r >= 0 ? r : r + b;
}

int main() {
  int a, b, t1, t2 = 0, t3 = 1, q, r = 1, t, n;
  cout << "enter b and a for inverse of b in Zn\n";
  cin >> b >> n;
  a = n;
  while (r != 0) {
    q = n / b;
    r = n % b;
    t1 = t2;
    t2 = t3;
    t3 = t1 - q * t2;
    n = b;
    b = r;
  }

  cout << "inverse is : " << euclidean_remainder(t2, a) << "\n";
}
