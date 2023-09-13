#include <iostream>
#include <string>

using namespace std;

string findBestWord(int iters);
int countLetters(string word);

int main() {

int iters;

    while (cin >> iters && iters != 0) {
        string bestWord = findBestWord(iters);
        cout << bestWord << endl;
    }

}


string findBestWord(int iters) {
    string currWord, bestWord;
    int currCount = 0;
    int bestCount = 0;

    for(int i = 0; i < iters; i++) {
        cin >> currWord;
        currCount = countLetters(currWord);
        if(currCount > bestCount) {
            bestWord = currWord;
            bestCount = currCount;
        }
    }
    return bestWord;
}

int countLetters(string word) {
    int length = word.length();
    int count = 0;
    for(int i = 0; i < length-1; i++) {
        count += word[i] == 'a'
              || word[i] == 'u'
              || word[i] == 'i'
              || word[i] == 'o'
              || word[i] == 'e'
              || word[i] == 'y'
              && word[i] == word[i+1]
              ? 1 : 0;    
    }
    return count;
}

