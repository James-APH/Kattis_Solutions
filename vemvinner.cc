#include <iostream>
#include <string>
#include <vector>


char getWinner(char symb, std::vector<char> board) {
  if ((board[0] == symb && board[1] == symb && board[2] == symb) ||
      (board[3] == symb && board[4] == symb && board[5] == symb) ||
      (board[6] == symb && board[7] == symb && board[8] == symb) ||
      (board[0] == symb && board[3] == symb && board[6] == symb) ||
      (board[1] == symb && board[4] == symb && board[7] == symb) ||
      (board[2] == symb && board[5] == symb && board[8] == symb) ||
      (board[0] == symb && board[4] == symb && board[8] == symb) ||
      (board[2] == symb && board[4] == symb && board[6] == symb))
  return symb;
  return '_';
}


int main () {
  std::vector<char> board;

  for (int i = 0; i < 9; i++) {
    char symb;
    std::cin >> symb;
    board.push_back(symb);
  }
  
  if (getWinner('O', board) == 'O') {
    std::cout << "Abdullah har vunnit" << std::endl;

  } else if (getWinner('X', board) == 'X') {
    std::cout << "Johan har vunnit" << std::endl;

  } else {
    std::cout << "ingen har vunnit" << std::endl;

  }
}

