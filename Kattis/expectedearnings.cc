// slot machine
// recieves n kronor
// costs p kronor
// only play if lose money in the long run
// input = n, k and p

#include <iostream>

int main() {
  double n, k, p;
  std::cin >> n >> k >> p;
  double exp_val = p * (n - k) + (1 - p) * (-k);
  std::cout << (exp_val < 0 ? "spela" : "spela inte!");
}
