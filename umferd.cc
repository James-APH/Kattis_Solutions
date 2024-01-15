#include <iostream>

int main () {
  int cols, rows;
  double emptyCount = 0;
  char symb;
  
  std::cin >> cols >> rows;

  for (int i = 0; i < cols*rows; ++i) {
    std::cin >> symb;
    if(symb == '.') {
      emptyCount++;
    }
  }
  std::cout << emptyCount/(cols*rows) << std::endl;
}
