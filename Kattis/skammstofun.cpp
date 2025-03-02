#include <iostream>
#include <string>

int main() {
  int n;
  std::string capStr = "";
  std::string str;
  std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> str;
    if (int(str[0]) >= 41 && int(str[0]) <= 90) {
      capStr += str[0];
    }
  }
  std::cout << capStr;
}
