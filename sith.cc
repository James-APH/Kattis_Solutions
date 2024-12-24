#include <cmath>
#include <iostream>
#include <stdlib.h>
#include <string>

int main() {
  std::string name;
  int a, b, ab;
  std::getline(std::cin, name);
  std::cin >> a >> b >> ab;
  if (a - b == abs(a - b))
    std::cout << "VEIT EKKI" << std::endl;
  else if (a - b == ab) {
    std::cout << "JEDI" << std::endl;
  } else {
    std::cout << "SITH" << std::endl;
  }
}
