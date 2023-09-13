#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int stringConverter(string);


// start would be i*3;
// characters would be 3;
// string would be the string of code;
string stringExtractor(string, int, int);



int main() {
    string word, newWord = "";
    string code, codeByteS;
    int codeByteI;
    getline(cin, word);
    cin >> code;
    
    int codeLength = static_cast<int>(code.length());
    int loopLength = codeLength/3;
    
    for(int i = 0; i < loopLength; i++) {
        codeByteS = stringExtractor(code, i*3, 3);
        
        cout << codeByteS << endl;
        
        codeByteI = stringConverter(codeByteS);
        
        cout << codeByteI << endl;
        
        newWord += word[codeByteI-1];
    }
    
    cout << newWord << endl;
    
    
}


string stringExtractor(string str, int start, int characters) {
    string newStr = "";
    for(int i = 0; i < characters; i++) {
        newStr += str[start+i];
    }
    return newStr;
}


int stringConverter(string str) {
    int asInt = 0;
    for(int i = 0; i < 3; i++) {
        int e = pow(10, 3 - (i + 1));
        switch(str[i]) {
            case '1': asInt += e*1; break;
            case '2': asInt += e*2; break;
            case '3': asInt += e*3; break;
            case '4': asInt += e*4; break;
            case '5': asInt += e*5; break;
            case '6': asInt += e*6; break;
            case '7': asInt += e*7; break;
            case '8': asInt += e*8; break;
            case '9': asInt += e*9; break;
            default: break;
        }
    }
    return asInt;
}
