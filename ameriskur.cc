#include <iostream>
#include <iomanip>


int main () {
  double N;
  std::cin >> N;
  double X = N * 0.09144;
  std::cout << std::setprecision(5) << std::fixed << std::endl;
  std::cout << X << std::endl;
}
