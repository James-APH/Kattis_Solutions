// May need to go with an iterative process for this problem:
// 1st check: every open cell is lit - Can replace all lit boxes with L.

// 2nd check: No two light bulbs can shin on eachother

// 3rd check: Box Check

#include <iostream>
#include <vector>

typedef std::vector<std::vector<char>> vvc;

bool allCellsLit(vvc grid, int size);
void lightUpCells(vvc grid, int size);
void lightUpCellsFromLight(vvc grid, int i, int j, int size);
bool lightCheckAdjacent(vvc grid, int i, int j, int size);
bool lightsAdjacent(vvc grid, int size);
bool isBlock(char symb);
int getBlockReq(vvc grid, int row, int col);
bool blockedCellIsComplete(vvc grid, int row, int col, int size);
bool blockedCellsHaveLights(vvc grid, int size);

int main() {
  int size = 0;
  std::cin >> size;
  std::vector<std::vector<char>> grid;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      char sqr;
      std::cin >> sqr;
      grid[i][j] = sqr;
    }
  }
  if (allCellsLit(grid, size) && lightsAdjacent(grid, size) &&
      blockedCellsHaveLights(grid, size)) {
    std::cout << 1 << std::endl;
  } else {
    std::cout << 0 << std::endl;
  }
}

bool allCellsLit(vvc grid, int size) {
  lightUpCells(grid, size);
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (grid[i][j] == '.')
        return false;
    }
  }
  return true;
}

void lightUpCells(vvc grid, int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (grid[i][j] == '?')
        lightUpCellsFromLight(grid, i, j, size);
    }
  }
}

void lightUpCellsFromLight(vvc grid, int i, int j, int size) {
  // Fill i'th row
  for (int j = 0; j < size; j++) {
    if (grid[i][j] == '.')
      grid[i][j] = 'L';
  }
  // Fill j'th col
  for (int i = 0; i < size; i++) {
    if (grid[i][j] == '.')
      grid[i][j] = 'L';
  }
}

bool isBlock(char symb) {
  char blocks[] = {'X', '0', '1', '2', '3', '4'};
  for (auto ch : blocks) {
    if (symb == ch)
      return true;
  }
  return false;
}

bool lightCheckAdjacent(vvc grid, int row, int col, int size) {
  // if block before light we can stop, if light before block return false
  // Check from i to start // j will decrease
  for (int j = col - 1; j > 0; j--) {
    if (isBlock(grid[row][j]))
      break;
    if (grid[row][j] == '?')
      return false;
  }
  // Check from i to end // j will increase
  for (int j = col + 1; j < size; j++) {
    if (isBlock(grid[row][j]))
      break;
    if (grid[row][j] == '?')
      return false;
  }
  // Check from j to start // i will decrease
  for (int i = row - 1; i > 0; i--) {
    if (isBlock(grid[i][col]))
      break;
    if (grid[i][col] == '?')
      return false;
  }
  // Check from j to end // i will decrease
  for (int i = row + 1; i < size; i++) {
    if (isBlock(grid[i][col]))
      break;
    if (grid[i][col] == '?')
      return false;
  }
  return true;
}

bool lightsAdjacent(vvc grid, int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (grid[i][j] == '?')
        if (!lightCheckAdjacent(grid, i, j, size))
          return false;
    }
  }
  return true;
}

int getBlockReq(vvc grid, int row, int col) {
  int ret;
  switch (grid[row][col]) {
  case '0':
    ret = 0;
    break;
  case '1':
    ret = 1;
    break;
  case '2':
    ret = 2;
    break;
  case '3':
    ret = 3;
    break;
  case '4':
    ret = '4';
    break;
  }
  return ret;
}

bool blockedCellIsComplete(vvc grid, int row, int col, int size) {
  int light_connections = 0;
  if (row + 1 < size) {
    if (grid[row + 1][col] == '?')
      light_connections++;
  }
  if (row - 1 >= 0) {
    if (grid[row - 1][col] == '?')
      light_connections++;
  }
  if (col + 1 < size) {
    if (grid[row][col + 1] == '?')
      light_connections++;
  }
  if (col - 1 >= 0) {
    if (grid[row][col - 1] == '?')
      light_connections++;
  }
  return light_connections == getBlockReq(grid, row, col);
}

bool blockedCellsHaveLights(vvc grid, int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (isBlock(grid[i][j]))
        if (!blockedCellIsComplete(grid, i, j, size))
          return false;
    }
  }
  return true;
}
