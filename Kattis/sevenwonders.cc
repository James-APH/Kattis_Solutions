#include <cmath>
#include <iostream>
#include <string>
#include <unordered_map>

int main() {
  char chars[] = {'T', 'C', 'G'};
  std::unordered_map<char, int> cardNumbers;
  std::string input;
  int sum = 0;
  int min = 51;
  std::cin >> input;
  for (auto &str : input) {
    cardNumbers[str] += 1;
  }
  //
  for (auto &c : chars) {
    sum += std::pow(cardNumbers[c], 2);
  }

  for (auto &c : chars) {
    if (cardNumbers[c] < min)
      min = cardNumbers[c];
  }

  sum += min * 7;

  std::cout << sum << std::endl;
}
