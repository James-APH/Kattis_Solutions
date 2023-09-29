#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;


void setVectors(int N, int M, int K, vector<double>& plots, vector<double>& houses) 
{
  int plot_radius, side_length;

  for(int i = 0; i < N; i++) 
  {
    cin >> plot_radius;
    plots.push_back(plot_radius);
  }

  for(int i = 0; i < M; i++) 
  {
    cin >> plot_radius;
    houses.push_back(plot_radius);
  }

  for(int i = 0; i < K; i++) 
  {
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
  
  setVectors(N, M, K, plots, houses);
  

  iters = (N <= (M + K) ? N: (M + K));
  
  for(int i = 0; i < iters; i++) 
  {
    plots_to_fill += (houses[i] < plots[i]);
  }

  cout << plots_to_fill << endl;
}

