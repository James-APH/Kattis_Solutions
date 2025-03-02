#include <iostream>

using namespace std;

int getCarryOps(int n1, int n2) {
  int carry_count = 0, carry_num = 0;

  while (n1 > 0 && n2 > 0) {
    int dn1 = n1 % 10;
    int dn2 = n2 % 10;
    carry_num = (dn1 + dn2 + carry_num) / 10;
    carry_count += carry_num > 0 ? 1 : 0;
    n1 = n1 / 10;
    n2 = n2 / 10;
  }

  return carry_count;
}

int main() {
  // must count the amount of carry operations, while, having a carry
  int n1, n2;
  int carry_count = 0;

  while (cin >> n1 >> n2 && (n1 != 0 || n2 != 0)) {
    carry_count = getCarryOps(n1, n2);

    if (carry_count > 1) {
      cout << carry_count << " carry operations." << endl;
    } else if (carry_count == 1) {
      cout << "1 carry operation." << endl;
    } else {
      cout << "No carry operations." << endl;
    }
  }
}
