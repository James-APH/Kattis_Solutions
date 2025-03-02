#include <algorithm>
#include <iostream>
#include <vector>

/*
 * --> 1 day to plant a seedling
 *
 * --> grow length is known
 *
 * initially we know the maximum "time" until the seedlings are all grown up
 *
 *
 *
 *
 */

int main() {
  int n;
  std::cin >> n;

  std::vector<int> vect;

  for (int i = 0; i < n; i++) {
    int temp;
    std::cin >> temp;
    vect.push_back(temp);
  }

  sort(begin(vect), end(vect));
  std::reverse(begin(vect), end(vect));

  int addedDistance = 0;
  int distance = vect[0];
  for (auto &v : vect) {
    if (distance == v) {
      addedDistance++;
      distance = v;
    } else {
      distance--;
    }
  }
  std::cout << vect[0] << " " << addedDistance << std::endl;
  std::cout << vect[0] + addedDistance + 1;
}
