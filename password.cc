#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n;

  string str;

  double k;

  cin >> n;

  vector<double> lp;

  for (int i = 0; i < n; i++) {
    cin >> str >> k;
    lp.push_back(k);
  }

  sort(lp.begin(), lp.end(), greater<double>());

  double sum = 0;

  for (int i = 0; i < n; i++) {
    sum += (lp[i] * (i + 1));
  }

  cout << sum << endl;
}
