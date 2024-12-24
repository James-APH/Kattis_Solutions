#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// forgot to log water drank one day
// remembers other days, there should be one day where he drank the minimum
// and one day where he drank the maximum
//
// n is the amount of days
// a is the minimum
// b is the maximum
//
//
//
// output:
// 1. Output in increasing order, all of the possible values for the missing
// entry separated by whitespace
//
//
// 2. simply output -1 if Eugene’s memory is faulty and it isn’t possible.
//

void setVector(int numOfDays, vector<int> &logs) {
  int water;
  for (int i = 0; i < numOfDays - 1; i++) {
    cin >> water;
    logs.push_back(water);
  }
  sort(logs.begin(), logs.end());
}

int main() {
  int numOfDays, minDrinks, maxDrinks;
  cin >> numOfDays >> minDrinks >> maxDrinks;
  vector<int> logs;
  setVector(numOfDays, logs);

  if (minDrinks != logs[0] && maxDrinks == logs[numOfDays - 2]) {
    cout << minDrinks;
  } else if (maxDrinks != logs[numOfDays - 2] && minDrinks == logs[0]) {
    cout << maxDrinks;
  } else if (minDrinks == logs[0] && maxDrinks == logs[numOfDays - 2]) {
    for (int i = minDrinks; i <= maxDrinks; i++) {
      cout << i << endl;
    }
  } else {
    cout << -1 << endl;
  }
}
