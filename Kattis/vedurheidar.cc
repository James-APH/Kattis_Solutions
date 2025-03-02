#include <iostream>
#include <string>

int main() {
  int windSpeed;
  int roads;
  std::string roadName;
  int roadSpeed;
  std::cin >> windSpeed >> roads;
  for (int i = 0; i < roads; i++) {
    std::cin >> roadName >> roadSpeed;
    std::cout << roadName << (roadSpeed < windSpeed ? " lokud" : " opin")
              << std::endl;
  }
}
