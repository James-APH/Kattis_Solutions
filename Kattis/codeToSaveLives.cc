#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>

int convertStringToNumber(std::string str) {
  auto isSpace = [](auto c) { return c == ' '; };
  str.erase(std::remove_if(begin(str), end(str), isSpace), end(str));
  return std::stoi(str);
}

std::string convertNumberToString(int n) {
  std::stringstream strReader;
  strReader << n;
  std::string str = strReader.str();
  strReader.str(std::string());
  for (auto &c : str) {
    strReader << c << " ";
  }
  return strReader.str();
}

int main() {
  int n;
  std::cin >> n;
  std::cin.ignore();
  for (int i = 0; i < n; i++) {
    std::string str1, str2;
    std::getline(std::cin, str1);
    std::getline(std::cin, str2);
    int num1 = convertStringToNumber(str1);
    int num2 = convertStringToNumber(str2);
    std::cout << convertNumberToString(num1 + num2) << std::endl;
  }
}
