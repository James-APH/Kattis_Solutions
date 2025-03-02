// need to find first Y intersection.
// y = mx + b
#define push_back pb

#include <iostream>
#include <utility>
#include <vector>

typedef std::pair<double, double> coord;
typedef std::pair<coord, coord> line;

using namespace std;

int main() {
  int barricade_number;
  vector<line> barricades;
  cin >> barricade_number;
  for (int i = 0; i < barricade_number; i++) {
    double x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    if ((x1 <= 0 && x2 >= 0) || (x1 > 0 && x2 < 0))
      barricades.pb(make_pair(make_pair(x1, y1), make_pair(x2, y2)));
  }

  if (barricades.size() == 0) {
    cout << -1.0 << endl;
  } else {
    vector<double> intercepts;
    for (auto &barricade : barricades) {
      // Calculate intercepts:
      double slope = (barricade.second.second - barricade.first.second) /
                     (barricade.second.first - barricade.first.first);
      intercepts.pb(barricade.first.second - (barricade.first.first * slope));
    }
    double min_intercept = 101;
    for (auto &intercept : intercepts) {
      if (intercept < min_intercept && intercept >= 0) {
        std::cout << "intercept: " << intercept << std::endl;
        min_intercept = intercept;
      }
    }
    if (min_intercept == 101) {
      std::cout << -1.0 << std::endl;
    } else {
      std::cout << min_intercept << std::endl;
    }
  }
}
