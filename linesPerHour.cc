#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


void setVect(int n, vector<int>& problems) {
  int linesOfCode;
  for(int i = 0; i < n; i++) {
    cin >> linesOfCode;
    problems.push_back(linesOfCode);
  }
  sort(problems.begin(), problems.end());
}



int getMaxProblems(vector<int> problems, int maxLines) {
  int i = 0, maxProblems = 0;
  int length = problems.size();  
  while(maxLines - problems[i] >= 0 && i < length) {
    maxLines -= problems[i];
    maxProblems++;
    i++;
  }
  return maxProblems;
}



int main() {
  int n, linesPerHour;
  cin >> n >> linesPerHour;
  

  int maxLines = linesPerHour * 5;
  vector<int> problems;
  setVect(n, problems);
  int maxProblems = getMaxProblems(problems, maxLines);
  cout << maxProblems << endl;
  
}

