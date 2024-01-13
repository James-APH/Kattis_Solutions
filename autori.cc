#include <iostream>
#include <string>


int main () {
  std::string str;
  std::string outputStr;
  std::cin >> str;

  outputStr += str[0];

  for (int i = 1; i < str.length(); ++i) {
    if (str[i] == '-')
      outputStr += str[i+1];
  }
  std::cout << outputStr << std::endl;


  return 0;
}
