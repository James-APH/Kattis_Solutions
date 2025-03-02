#include <iostream>

int main() {
  // n total slices
  // number of people living in household = m
  // all residents must get an equal number of slices
  // how many slices will be left over
  // modulus puzzle
  int n, m;
  std::cin >> n >> m;
  std::cout << n % m;
}
