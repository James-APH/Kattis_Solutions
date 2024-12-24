#include <cmath>
#include <iostream>

using namespace std;

int getProduct(int);

int power(int, int);

int main() {
  int iters;
  cin >> iters;
  int sum = 0, num;
  for (int i = 0; i < iters; i++) {
    cin >> num;
    sum += getProduct(num);
  }
  cout << sum << endl;
}

int getProduct(int num) {
  int p = num % 10;
  num = num / 10;
  return power(num, p);
}

int power(int n, int p) {
  if (p == 0)
    return 1;
  int sum = n;
  for (int i = 1; i < p; i++) {
    sum *= n;
  }
  return sum;
}
