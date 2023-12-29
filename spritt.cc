#include <iostream>


int main () {
	int n, x, sum = 0;
	std::cin >> n >> x;

	for (int i = 0; i < n; i++) {
		int a;
		std::cin >> a;
		sum += a;
	}
	if (x >= sum) {
		std::cout << "Jebb" << std::endl;
	} else {
		std::cout << "Neibb" << std::endl;
	}
}
