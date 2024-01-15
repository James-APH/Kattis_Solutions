#include <iostream>

int main () {
  int N, K;
  std::cin >> N >> K;
  std::cout << (N == 0 ? 2022 : 2022 + (N / K)) << std::endl;
}
