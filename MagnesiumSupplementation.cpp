#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;





long long getNumOfPrescriptions(long long maxGram, long long maxPill, long long prefPill) {
  int combinations = 0;

  for(long long i = 0; i < maxGram && i < maxPill; i++ ) {
    if(maxPill % i == 0 && maxPill/i < prefPill) {
      combinations++;
    }
  }

  return combinations;
}

int main() {
  int n, p, k;
  cin >> n >> p >> k;

  cout << getNumOfPrescriptions(n, p, k) << endl;




}







