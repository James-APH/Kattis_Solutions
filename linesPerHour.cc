#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


void setVect(int n, vector<int>& problems) {
  int loc;
  for(int i = 0; i < n; i++) {
    cin >> loc;
    problems.push_back(loc);
  }
  sort(problems.begin(), problems.end());
}

int getMaxProblems(vector<int> problems, int maxLines) {
  int i = 0, maxProblems = 0;
  while(maxLines-problems[i] >= 0) {
    maxLines-=problems[i];
    maxProblems++;
    i++;
  }
  return maxProblems;
}



int main() {
  int n, lph;
  cin >> n >> lph;
  

  int maxLines = lph * 5;
  
  vector<int> problems;
  setVect(n, problems);
  
  int maxProblems = getMaxProblems(problems, maxLines);
  cout << maxProblems << endl;
  
}
