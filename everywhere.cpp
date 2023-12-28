#include <iostream>
#include <unordered_set>

int main () { 
    int t, n;
    std::string str;
    std::cin >> t;
    for (int i = 0; i < t; i++) {
        std::unordered_set<std::string> container;
        std::cin >> n;
        for (int i = 0; i < n; i++) {
            std::cin >> str;
            container.insert(str);
        }
        std::cout << container.size() << std::endl;
    }
}
