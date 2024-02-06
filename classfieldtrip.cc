#include <iostream>
#include <string>
#include <algorithm>

int main () {
    std::string ben, ann;
    std::cin >> ann >> ben;
    std::string str = ann + ben;
    sort(begin(str), end(str));
    std::cout << str;
}
