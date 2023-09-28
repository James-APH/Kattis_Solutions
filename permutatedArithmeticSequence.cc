#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void makeVect(int, vector<int>&);

bool isArithmetic(const int,const vector<int>);

bool isPermutedArithmetic(const int, const vector<int>);


int main() {
  int amount_of_sequences;
  int sequence_length;

  cin >> amount_of_sequences;

  for(int i = 0; i < amount_of_sequences; i++) {
    vector<int> vect; 
    cin >> sequence_length;
    
    makeVect(sequence_length, vect);
    
    cout << vect << endl;

    if(isArithmetic(sequence_length, vect))
    {
      cout << "arithmetic" << endl;
    } 
    else if(isPermutedArithmetic(sequence_length, vect)) 
    {
      cout << "permuted arithmetic" << endl;
    }
    else 
    {
      cout << "non-arithmetic" << endl;
    }
  }

}

void makeVect(int length, vector<int>& vect) {
  vect.reserve(length);  
  int element;
    for(int i = 0; i < length; i++) {
        cin >> element;
        vect.push_back(element);
    }
}


bool isArithmetic(const int length, const vector<int> vect) {
  int diff = vect[1] - vect[0];
  for(int i = 1; i < length; i++) {
    if(diff != vect[i+1] - vect[i])
      return false;
  }
  return true;
}


bool isPermutedArithmetic(const int length, vector<int> vect) {
  sort(vect.begin(), vect.end());
  bool isPA = isArithmetic(length, vect);
  return isPA;
}
