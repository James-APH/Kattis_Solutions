#include <iostream>
#include <string>
#include <algorithm>

int main() {
   std::string a, b;
   std::cin >> a >> b;
   std::reverse(begin(a), end(a));
   std::reverse(begin(b), end(b));
   std::cout << std::max(std::stoi(a), std::stoi(b));
}
