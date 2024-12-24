#include <iostream>

using namespace std;

void fizzBuzz(int x, int y, int n) {
  if (n % x == 0 && n % y == 0) {
    cout << "FizzBuzz" << endl;
  } else if (n % x == 0) {
    cout << "Fizz" << endl;
  } else if (n % y == 0) {
    cout << "Buzz" << endl;
  } else
    cout << n << endl;
}

int main() {
  int x, y, n;
  cin >> x >> y >> n;

  for (int i = 1; i <= n; i++) {
    fizzBuzz(x, y, i);
  }
}
