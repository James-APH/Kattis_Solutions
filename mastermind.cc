// --> code maker 
// creates a sequence of n colored pegs
// dupes allowed, sequence of pegs is the code.

// --> code breaker
// tries to determine the code maker's code, makes a series of guesses.
// each guess consists of n colored pegs.
// after each guess the code maker gives the code breaker
// feedback about how close she is.

// --> feedback
// r - number of pegs that are identical in color and position
//     in the code and the guess.

// s - number of remaining pegs that are identical in color
//     but not in the same position

#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>

// [O(log n)]
//
int findR(int length, std::string code, std::string guess) {
  int r = 0;
  for (int i = 0; i < length; i++)
      if (code[i] == guess[i])
        r++;
  return r;
}

void makeAlpha(std::unordered_map<char, int>& map) {
  for (int i = 0; i < map.size(); i++)
    map[char(i+97)] = 0;
}

// [O(log n)]
int findS(int length, int r, std::string code, std::string guess) {
  int s = 0;
  std::unordered_map<char, int> codeMap;
  codeMap.reserve(26);
  makeAlpha(codeMap);
  for (int i = 0; i < length; i++) {
    codeMap[code[i]]++;
  }
  for (int i = 0; i < length; i++) {
    if (codeMap[guess[i]] > 0) {
      s++;
      codeMap[guess[i]]--;
    }
  }
  return s - r;
}



int main () {
// [O(1)]
  int length;
  std::string code, guess;
  std::cin >> length >> code >> guess;
// [2O(log n)]
  int r = findR(length, code, guess);
  int s = findS(length, r, code, guess);
// [O(1)]  
  std::cout << r << " " << s << std::endl;
}
