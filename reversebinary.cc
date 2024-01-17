#include <iostream>
#include <cmath>
#include <sstream>
#include <algorithm>

std::string toBinary(int num) {
  std::stringstream binVal;
  while (num != 0) {
    binVal << (num % 2 == 1 ? "1" : "0");
    num = num/2;
  }
  return binVal.str();
}

int toDecimal(std::string num) {
  int decVal = 0;
  for (int i = 0; i < num.length(); i++) {
    if (num[i] == '1') {
      decVal += pow(2, i);
    }
  }
  return decVal;
}

int main () {
  int num;
  std::cin >> num;
  std::string reversedBinaryNumber = toBinary(num);
  std::reverse(begin(reversedBinaryNumber), end(reversedBinaryNumber));
  int newDecimalNumer = toDecimal(reversedBinaryNumber);
  std::cout << newDecimalNumer << std::endl;

}
