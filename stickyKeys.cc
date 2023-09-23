#include <iostream>
#include <string>

using namespace std;

string noDupes(string, int);

int main() {
  string str;
  string newStr = ""; 
  getline(cin, str); 
  
  int len = str.length();
  
  newStr = noDupes(str, len);

  cout << newStr << endl;
}

string noDupes(string str, int len) {
  string newStr = "";
  for(int i = 0; i < len; i++) {
    if(str[i] != str[i+1]) {
      newStr[i] += str[i];
    }
  }
return newStr;
}
