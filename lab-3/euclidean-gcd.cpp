#include <iostream>
using namespace std;

int gcd(int x, int y) {
  int r = x % y;
  return r == 0 ? y : gcd(y, r);
}
int main() {
  int x, y, r;
  cout << "Enter numbers to find gcd of\n";
  cin >> x;
  cin >> y;
  cout << "gcd is : " << gcd(x, y) << "\n";
}
