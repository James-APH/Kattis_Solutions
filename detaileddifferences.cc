#include <iostream>
#include <string>

int main () {
  int N;
  std::cin >> N;

  for (int i = 0; i < N; i++) {
    std::string original;
    std::string clone;
    std::string differences = "";
    std::cin >> original >> clone;
    for (int i = 0; i < original.length(); i++) {
      differences += (original[i] == clone[i] ? "." : "*");
    }
    std::cout << original << '\n';
    std::cout << clone << '\n';
    std::cout << differences << '\n' << std::endl;
  }


}
