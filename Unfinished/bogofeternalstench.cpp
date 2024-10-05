#include <utility>
#include <vector>
#include <ranges>
#include <map>


int shortest_path(std::map<int, std::vector<std::pair<int, int>>> adjacency_list, int destination) {
  return 0;
} 




int main() {
  std::map<int, std::vector<std::pair<int, int>>> adjacency_list;
  int n, m;
  std::cin >> n >> m;
  for (int i: std::views::iota(m+1)) {
    int u, v, s;
    std::cin >> u >> v >> s;
    adjacency_list[u].push_back(std::make_pair(v, s));
  }

  int path = shortest_path(adjacency_list, destination);
  std::print(path);
}
