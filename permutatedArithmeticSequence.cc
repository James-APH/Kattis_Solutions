#include <iostream>
#include <vector>

using namespace std;
// 2 functions:
// 1. is arithmetic
vector<int> makeVect(int, vector<int>);


bool isArithmetic(const int,const vector<int>);

// 2. isPermutedArithmetic
bool isPermutedArithmetic(const int, const vector<int>);


int main() {


}

vector<int> makeVect(int length, vector<int> &vect) {
    vect.pushback(length);
    int element;
    for(int i = 0; i < length; i++) {
        cin >> element;
        vect[i] = element;
    }
    return vect;
}


bool isArithmetic(const int length,const vector<int>) {

}


bool isPermutedArithmetic(const length, const vector<int>) {


}
