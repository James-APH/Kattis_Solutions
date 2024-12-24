#include <iostream>

void count(int start, int end) {
  for (int i = start + 1; i < end; i++) {
    std::cout << i << '\n';
  }
}

int main() {
  int iters;
  int previous = 0, current = 0;
  bool fullList = true;
  std::cin >> iters;
  for (int i = 0; i < iters; i++) {
    previous = current;
    std::cin >> current;
    if (previous + 1 == current)
      continue;
    fullList = false;
    count(previous, current);
  }
  if (fullList)
    std::cout << "good job" << std::endl;
}
