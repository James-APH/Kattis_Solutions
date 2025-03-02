#include <iostream>

typedef long long ll;

int main() {
  ll num1, num2;
  while (!stop && std::cin >> num1 >> num2) {
    std::cout << abs(num1 - num2) << std::endl;
  }
}
