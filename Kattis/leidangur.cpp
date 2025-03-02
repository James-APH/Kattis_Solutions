#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>

int main() {
  std::string journey;
  std::cin >> journey;
  std::stack<char> backpack;
  std::unordered_map<char, char> evil_needs = {
      {'P', 'p'}, {'G', 'g'}, {'O', 'o'}};
  for (char c : journey) {
    if (c == 'P' or c == 'G' or c == 'O') {
      while (!backpack.empty() && backpack.top() != evil_needs[c]) {
        backpack.pop();
      }
      if (backpack.empty()) {
        break;
      } else {
        backpack.pop();
      }
    } else {
      backpack.push(c);
    }
  }

  if (backpack.empty()) {
    std::cout << "Neibb" << std::endl;
  } else {
    int p_count = 0, g_count = 0, o_count = 0;
    while (!backpack.empty()) {
      switch (backpack.top()) {
      case 'p':
        p_count++;
        break;
      case 'g':
        g_count++;
        break;
      case 'o':
        o_count++;
        break;
      }
      backpack.pop();
    }
    std::cout << p_count << '\n' << g_count << '\n' << o_count << std::endl;
  }
}
