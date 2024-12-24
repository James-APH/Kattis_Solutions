#include <iomanip>
#include <iostream>

using namespace std;

double getSLminute(int);

int main() {
  int obs;
  cin >> obs;
  double SL_min = getSLminute(obs);
  if (SL_min <= 1) {
    cout << "measurement error" << endl;
  } else {
    cout << setprecision(7) << fixed << SL_min << endl;
  }
}

double getSLminute(int obs) {
  double sec, min;
  double sec_sum = 0, min_sum = 0;
  for (int i = 0; i < obs; i++) {
    cin >> min >> sec;
    min_sum += min;
    sec_sum += sec;
  }
  return sec_sum / (min_sum * 60);
}
