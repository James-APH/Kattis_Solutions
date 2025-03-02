#include <iostream>
#include <vector>

int main() {
  int N, a;
  std::cin >> N;
  std::vector<int> A;
  std::vector<int> gis;

  for (int i = 0; i < N; i++) {
    std::cin >> a;
    A.push_back(a);
  }

  gis.push_back(A[0]);
  int currentLargestNumber = A[0];
  for (int i = 0; i < N - 1; i++) {
    if (currentLargestNumber < A[i + 1]) {
      currentLargestNumber = A[i + 1];
      gis.push_back(A[i + 1]);
    }
  }

  std::cout << gis.size() << std::endl;

  for (int i = 0; i < gis.size(); i++) {
    std::cout << gis[i] << " ";
  }
}
