#include <iostream>
#include <iomanip>

double calculateProbability(double k) {
  double p = 0;
  for(int i = 1; i <= 6; i++) {
    for (int j = 1; j <= 6; j++) {
      p += ((i + j) == k);
    }
  }
  p = p / 36;
  return p;
}




int main () {
  int N;
  std::cin >> N;
  double probability = 0;
  for (int i = 0; i < N; i++) {
    int k;
    std::cin >> k;
    probability += calculateProbability(k);
  }
  std::cout << std::setprecision(4) << std::fixed;
  std::cout << probability << std::endl;

}
