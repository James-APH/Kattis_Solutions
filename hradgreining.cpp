#include <iostream>
#include <string>

int main () {
  std::string str;
  std::string conclusion = "Ekki veikur!";
  std::cin >> str;
  for (int i = 0; i < str.length(); i++) {
    if (str[i] == 'C' && str[i+1] == 'O' && str[i+2] == 'V') {
      conclusion = "Veikur!";
      break;
    }
  }
  std::cout << conclusion << std::endl;
}
