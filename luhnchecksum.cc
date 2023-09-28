#include <iostream>
#include <string>

using namespace std;


int getNum(int i, string str) {
  return(str[i] - '0');
}

bool checkSum(int length, string str) {
  int sum = 0;
  int d = 0;
  for(int i = 0; i < length; i++) {
    if(i % 2 == 0) {
      sum += getNum(i, str);
    } else {
      d = getNum(i, str);
      sum += getDigit(d);
    }
    return ((sum % 10) == 0);
  }
}

int getDigit(int d) {
  return ((d * 2 > 9)? ((d*2)%10) + ((d*2)/10):(d*2));
}

int main() {
  int t, int length;
  string str;
  bool isValid = false;
  

  cin >> t;
  for(int i = 0; i < t; i++ {
    cin >> str;
    reverse(str.begin(), str.end());
    length = str.length();
    isValid = checkSum(length, str);
    cout << (isValid ? "PASS" : "FAIL");
  }




}
