#include <iostream>

using namespace std;

// find least common multiple
// if lcm is between 1 and s,
// output yes
// else
// output no

int getGCD(int p, int q) {
  int gcd = 1;
  int ln = (p < q ? p : q);
  for (int i = 0; i <= ln / 2; i++) {
    if (p % i == 0 && q % i == 0) {
      gcd = i;
    }
  }
  return gcd;
}

int getLCM(int gcd, int p, int q) { return ((p * q) / gcd); }

int main() {
  int p, q, s;
  cin >> p >> q >> s;

  int gcd = getGCD(p, q);
  int lcm = getLCM(gcd, p, q);

  cout << (lcm <= s ? "yes" : "no") << endl;
}
