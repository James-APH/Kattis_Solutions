#include <iostream>
#include <cmath>

using namespace std;



int getProduct(int);


int main() {
  int iters;
  cin >> iters;
  int sum = 0, num;
  for(int i = 0; i < iters; i++) {
    cin >> num;
    sum += getProduct(num);
  }
  cout << sum << endl;
}

int getProduct(int num) {
  int p = num % 10;
  num = num / 10;
  return pow(num, p);
}
