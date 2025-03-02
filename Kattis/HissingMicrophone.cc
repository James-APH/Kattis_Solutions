#include <iostream>
#include <string>

using namespace std;

int main() {
  string str;
  cin >> str;
  int length = str.length() - 1;
  bool hiss = false;
  for (int i = 0; i < length; i++) {
    if (str[i] == 's' && str[i + 1] == 's') {
      hiss = true;
    }
  }
  cout << (hiss ? "hiss" : "no hiss") << endl;
}
