#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;





void getNumOfPrescriptions(long long maxGram, long long maxPill, long long prefPill) {
  int combinations = 0;
  vector<long long> work;
  long long iters = (maxGram == maxPill ? maxGram : maxGram < maxPill ? maxGram:maxPill);
  for(long long i = 0; i < iters; i++ ) {
    if(maxPill % i && maxGram % i) {
      combinations++;
      if(maxGram%(maxPill/i) && maxPill/i < prefpill) {
        work.push_back(i);
      }
    }
  }

  cout << combinations << endl;

  int length = work.length();

  for(int i = 0; i < length(); i++) {
    cout << work[i] << endl;


  }
}

int main() {
  int n, p, k;
  cin >> n >> p >> k;

  cout << getNumOfPrescriptions(n, p, k) << endl;




}







