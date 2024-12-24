#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  std::vector<int> vect;
  std::vector<int> vectClone;

  int length;
  std::cin >> length;
  for (int i = 0; i < length; i++) {
    int element;
    std::cin >> element;
    vect.push_back(element);
  }
  vectClone = vect;

  sort(begin(vect), end(vect));

  int count = 0;
  for (int i = 0; i < length; i++) {
    if (vect[i] != vectClone[i])
      count++;
  }
  std::cout << count << std::endl;
}
