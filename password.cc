#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// inputs: N number of Pw's in list
//      N1 Password   Probability Pw is Correct
//      N2 Password   Probability Pw is Correct
//      N3 Password   Probability Pw is Correct

// 



int main() {
  int n;
  
  string str;
  
  double k;
  
  cin >> n;
  // vector to list probability;
  // vector to list word count;
  
  vector<double> lp;

  for(int i = 0; i < n; i++) {
    cin >> str >> k;
    lp.push_back(k);
  }

  sort(lp.begin(), lp.end());
  

  double sum = 0;
  

  for(int i = 0; i < n; i++) {
    cout << "lp[" << i << "] = " << lp[i] << endl;
    sum += (lp[i] * (i+1));
  }
  
  cout << sum << endl;

}
