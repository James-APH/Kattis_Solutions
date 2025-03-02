#include <algorithm>
#include <iostream>
#include <string>

int main() {
  std::string input;
  std::cin >> input;
  std::sort(begin(input), end(input));
  for (int i = 0; i < input.length() - 1; i++) {
    if (input[i] == input[i + 1]) {
      std::cout << 0 << std::endl;
      return 0;
    }
  }
  std::cout << 1 << std::endl;
  return 0;
}
