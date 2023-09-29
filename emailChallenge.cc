#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


int getCharNum(int index, string str) {
  return str[index] - '0';
}

void countSym(int index, string str, double& whitespace, double& lowercase, double& uppercase, double& symbols) {
  int charNum = getCharNum(index, str);
  if(charNum == 95) {
    whitespace++;
  } else if(charNum >= 97 && charNum <= 122) {
    lowercase++;
  } else if(charNum >= 65 && charNum <= 90) {
    uppercase++;
  } else {
    symbols++;
  }
}


int main() {
  double whitespace = 0;
  double lowercase = 0;
  double uppercase = 0;
  double symbols = 0;
  string str;
  cin >> str;
  int length = str.length();
  for(int i = 0; i < length; i++) {
    countSym(i, str, whitespace, lowercase, uppercase, symbols);
  }
  double sum = whitespace + lowercase + uppercase + symbols;

  cout << setprecision(6) << fixed << whitespace/sum << endl;
  cout << setprecision(6) << fixed << lowercase /sum << endl;
  cout << setprecision(6) << fixed << uppercase /sum << endl;
  cout << setprecision(6) << fixed << symbols / sum << endl;
}


