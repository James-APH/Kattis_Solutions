#include <algorithm>
#include <iostream>
#include <string>

int main() {
  std::string str;
  std::cin >> str;
  reverse(str.begin(), str.end());
  std::cout << str;
}
