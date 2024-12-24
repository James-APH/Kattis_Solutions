#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
  long long int area;
  std::cin >> area;
  std::cout << std::fixed << std::setprecision(6) << sqrtl(area) * 4
            << std::endl;
}
