#include <iostream>

using namespace std;


double getSLminute(int);


int main() {
    int obs;
    double SL_min = getSLminute(obs);
    cout << SL_min << endl;

}

double getSLminute(int obs) {
    double sec, min;
    double sec_sum = 0, min_sum = 0;
    for(int i = 0; i < obs; i++) {
        cin >> min >> sec;
        min_sum += min;
        sec_sum += sec;
    }
    double SLM =  sec_sum / (min_sum*60);
    return SLM;
}



