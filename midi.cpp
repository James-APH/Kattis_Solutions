#include <iostream>
#include <string>
#include <ranges>


int main() {
  int iters;
  std::cin >> iters;

  std::string word = "";
  std::string words = "";
  for (int i = 0; i < iters; i++) {
    std::cin >> word;
    std::reverse(begin(word), end(word)); 
    words = word + words;
  }
    
  std::cout << words << std::endl;
}
