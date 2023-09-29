#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

// N circular plots
// M circular houses
// K square houses
//
// can only be one house on each plot
//
// houses can't touch boundaries of the plots
//
// figure out how many plots can be filled
//
// First line: N M K
// Next line N1, N2, N3, N4, Nn
// Next line M1, M2, M3, Mn
// Next line K1, K2, Kn
//
// Limits: all var >= 1, <= 100
// set used plots to zero

void setVectors(int N, int M, int K, vector<double>& plots, vector<double>& houses) 
{
  int plot_radius, side_length;


  for(int i = 0; i < N; i++) {
    cin >> plot_radius;
    plots.push_back(plot_radius);
  }

  for(int i = 0; i < M; i++) {
    cin >> plot_radius;
    houses.push_back(plot_radius);
  }

  for(int i = 0; i < K; i++) {
    cin >> side_length;
    double square_radius = (sqrt(pow(side_length, 2) + pow(side_length, 2))/2);
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
  vector<double> plots;
  vector<double> houses;


  cin >> N >> M >> K;
  
  iters = (N <= M+K ? N: M+K);
  setVectors(N, M, K, plots, houses);

  for(int i = 0; i < iters; i++) {
    plots_to_fill += (houses[i] < plots[i]);
  }

  cout << plots_to_fill << endl;
}

