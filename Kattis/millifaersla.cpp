#include <iostream>

int main() {
  int a, b, c;
  std::cin >> a >> b >> c;
  if (a < b && a < c) {
    std::cout << "Monnei" << std::endl;
  } else if (b < a && b < c) {
    std::cout << "Fjee" << std::endl;
  } else {
    std::cout << "Dolladollabilljoll" << std::endl;
  }
}
