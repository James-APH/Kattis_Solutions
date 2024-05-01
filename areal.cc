#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    long long int area;
    std::cin >> area;
    std::cout << std::fixed << std::setprecision(6) << sqrtl(area)*4 << std::endl;
}
