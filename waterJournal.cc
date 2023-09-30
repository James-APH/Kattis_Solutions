#include <iostream>
#include <vector>
#include <algorithm>


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
// 1. Output in increasing order, all of the possible values for the missing entry separated by whitespace 
//
//
// 2. simply output -1 if Eugene’s memory is faulty and it isn’t possible.
//

void setVector(int n, vector<int>& log) {
  int water;
  for(int i = 0; i < n-1; i++) {
    cin >> water;
    log.push_back(water);
  }
  sort(log.begin(), log.end());
}


int main() {
  int n, a, b;
  cin >> n >> a >> b;
  vector<int> log;
  setVector(n, log);

  if(a != log[0] && b != log[n-2]) {
    cout << -1 << endl;
  }

  if(a != log[0]) 
  {
    cout << a;
  } 
  else if(b != log[n-2]) {
    cout << b;
  } 
  else if(a == log[0] && b == log[n-2])
  {
    for(int i = a; i <= b; i++) 
    {
      cout << i << endl;
    }
  } 
  else 
  {
    cout << -1 << endl;
  }


}
