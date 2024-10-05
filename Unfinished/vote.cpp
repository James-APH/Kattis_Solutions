#include <iostream>
#include <ranges>
#include <vector>
#include <utility>
// Want to store: candidate number
//                candidate amount of votes
//



struct candidate_data {
  int number;
  int votes;
};

bool check_dupes(std::vector<candidate_data> candidates, int max_value) {
  return false;
}


int main() {
  int test_cases;


  std::cin >> test_cases;
  for (int i : std::ranges::iota_view(1, test_cases+1)) {
    int candidate_number;
    std::cin >> candidate_number;
    std::vector<candidate_data> candidates;
    for (int j : std::ranges::iota_view(0, candidate_number)) {
      int candidate_votes;
      std::cin >> candidate_votes;
      
          
    }
  }
}
