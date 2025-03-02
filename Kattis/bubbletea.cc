#include <iostream>
#include <ranges>
#include <vector>

using namespace std;

vector<int> populate(int n) {
  vector<int> vec;
  for (int i = 0; i < n; i++) {
    int cost;
    cin >> cost;
    vec.push_back(cost);
  }
  return vec;
}

int main() {
  int min = 2'000'000'000;
  int N, M;

  cin >> N;
  vector<int> tea_costs(populate(N));
  cin >> M;
  vector<int> topping_costs(populate(M));

  for (int cost_index = 0; cost_index++; cost_index < N) {
    int k;
    cin >> k;
    for (int j = 0; j < k; j++) {
      int ki;
      cin >> ki;
      if (tea_costs[cost_index] + topping_costs[ki] < min)
        min = tea_costs[cost_index] + topping_costs[ki];
    }
  }

  std::cout << "\n min=" << min << std::endl;
  int money;
  std::cin >> money;
  std::cout << (money / min) - 1;
}
