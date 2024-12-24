#include <iostream>
#include <string>
#include <unordered_map>

int main() {
  int m, n;
  std::unordered_map<std::string, int> jobs;
  std::unordered_map<std::string, int>::iterator it;
  std::cin >> m >> n;

  for (int i = 0; i < m; i++) {
    std::string job;
    int price;
    std::cin >> job >> price;
    jobs.insert({job, price});
  }

  for (int i = 0; i < n; i++) {
    int cost = 0;
    std::string keyWord = "";
    while (keyWord != ".") {
      std::cin >> keyWord;
      it = jobs.find(keyWord);
      if (it != end(jobs)) {
        cost += jobs[keyWord];
      }
    }
    std::cout << cost << std::endl;
  }
}
