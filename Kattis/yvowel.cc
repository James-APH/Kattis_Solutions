#include <iostream>
#include <string>

using namespace std;

void vowel(string str, int &sumV, int &sumVY) {
  int length = str.length();
  char stri;
  for (int i = 0; i < length; i++) {
    stri = str[i];
    if (stri == 'a' || stri == 'e' || stri == 'i' || stri == 'u' ||
        stri == 'o') {
      sumV++;
      sumVY++;
    }
    if (stri == 'y') {
      sumVY++;
    }
  }
}

int main() {
  string str;
  cin >> str;
  int sumV = 0, sumVY = 0;
  vowel(str, sumV, sumVY);
  cout << sumV << " " << sumVY << endl;
}
