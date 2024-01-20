#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

std::vector<int> createLists(int n) {
    std::vector<int> list;
    for (int i = 0; i < n; i++) {
        int element;
        std::cin >> element;
        list.push_back(element);
    }
    return list;
}


int main() {
    int n;
    std::cin >> n;
    while (n != 0) {
        std::vector<int> v1;
        std::vector<int> v2;

        v1 = createLists(n);
        v2 = createLists(n);

        std::vector<int> sv1(v1);
        std::vector<int> sv2(v2);

        sort(begin(sv1), end(sv1));
        sort(begin(sv2), end(sv2));


        std::vector<int> syncedVector;
        syncedVector.reserve(n);

        for (int i = 0; i < n; i++) {
            auto it = find(begin(v1), end(v1), sv1[i]);
            int index = it - v1.begin();
            syncedVector[index] = sv2[i];
        }


        for (int i = 0; i < n; i++) {
            std::cout << syncedVector[i] << std::endl;
        }
        std::cout << std::endl;
        std::cin >> n;
    }

    return 0;
}

