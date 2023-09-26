#include <iostream>
#include <vector>

using namespace std;



vector<int> makeVect(int, vector<int>);

bool isArithmetic(const int,const vector<int>);

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


bool isArithmetic(const int length,const vector<int> vect) {
  int diff = vect[1] - vect[0];
  for(int i = 1; i < length; i++) {
    if(diff != vect[i+1] - vect[i])
      return false;
  }
  return true;
}


bool isPermutedArithmetic(const length, vector<int>) {
  

}
