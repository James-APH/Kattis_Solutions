#include <iostream>
#include <unordered_set>

int main() {
  std::unordered_set<int> list;

  for (int i = 0; i < 10; i++) {
    int n;
    std::cin >> n;
    list.insert(n % 42);
  }
  std::cout << list.size() << std::endl;
}
