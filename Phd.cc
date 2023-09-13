#include <iostream>

using namespace std;

int getNum(const string);

int main() {
    int iters;
    string formula;
    cin >> iters;
    for(int i = 0; i < iters; i++) {
        cin >> formula;
        if(formula == "P=NP")
        {
            cout << "skipped" << endl;
            continue;
        }
        int ans = getNum(formula);
        cout << ans << endl;
        
    }
    

    
    
}

int getNum(const string formula) {
    int n1 = 0, n2 = 0;
    int length = formula.length();
    bool passedOperator = false;
    for(int i = 0; i < length; i++) {
        if(formula[i] == '+') {
            passedOperator = true;
            continue;
        }
        if(passedOperator) {
            n2*=10;
            n2+= formula[i] - '0';
        } else {
            n1*=10;
            n1+= formula[i] - '0';
        }
    }
    return n1+n2;
}
