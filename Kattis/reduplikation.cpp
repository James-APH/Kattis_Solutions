#include <iostream>
#include <string>

int main() {
  std::string str;
  int num;
  std::cin >> str >> num;
  for (int i = 0; i < num; i++) {
    std::cout << str;
  }
}
