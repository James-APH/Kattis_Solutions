#include <iostream>
#include <vector>

int main() {
    std::vector<int> vect;
    int n;
    std::cin >> n;
    vect.reserve(n);
    for (int i = 0; i < n; i++) {
        int temp;
        std::cin >> temp;
        vect.push_back(temp);
    }
    reverse(vect.begin(), vect.end());
    for (auto e : vect) {
        std::cout << e << std::endl;
    }
}
