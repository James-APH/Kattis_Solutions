#include <iostream>
#include <string>

int main() {
  std::string str;
  std::cin >> str;
  int bCount = 0, kCount = 0;

  for (int i = 0; i < str.length(); i++) {
    if (str[i] == 'b') {
      bCount++;
    }
    if (str[i] == 'k') {
      kCount++;
    }
  }
  if (bCount > kCount) {
    std::cout << "boba" << std::endl;
  } else if (kCount > bCount) {
    std::cout << "kiki" << std::endl;
  } else if (kCount == bCount && kCount != 0) {
    std::cout << "boki" << std::endl;
  } else {
    std::cout << "none" << std::endl;
  }
}
