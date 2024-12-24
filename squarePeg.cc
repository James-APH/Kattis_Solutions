#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int power(int base, int power) {
  if (power == 0)
    return 1;
  if (power == 1)
    return base;
  return base * power(base, power - 1);
}

void setVectors(int N, int M, int K, vector<int> &plots, vector<int> &houses) {
  int plot_radius, side_length;

  for (int i = 0; i < N; i++) {
    cin >> plot_radius;
    plots.push_back(plot_radius);
  }

  for (int i = 0; i < M; i++) {
    cin >> plot_radius;
    houses.push_back(plot_radius);
  }

  for (int i = 0; i < K; i++) {
    cin >> side_length;
    int square_radius =
        (sqrt(power(side_length, 2) + power(side_length, 2)) / 2);
    houses.push_back(square_radius);
  }

  sort(plots.begin(), plots.end());
  sort(houses.begin(), houses.end());
}

int main() {
  // declaring house related variables:
  int N, M, K;

  // declaring loop related variables:
  int iters;
  int plots_to_fill = 0;

  // declaring house related vectors;
  vector<int> plots;
  vector<int> houses;

  cin >> N >> M >> K;

  setVectors(N, M, K, plots, houses);

  iters = (N <= (M + K) ? N : (M + K));

  for (int i = 0; i < iters; i++) {
    plots_to_fill += (houses[i] < plots[i]);
  }

  cout << plots_to_fill << endl;
}
