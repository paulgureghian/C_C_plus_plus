#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <sstream> 

using std::istringstream;
using std::ifstream;
using std::cout;
using std::string;
using std::vector;

enum class State {kEmpty, kObstacle};

vector<int> ParseLine(string line) {
    istringstream sline(line);
    int n;
    char c;
    vector<int> row;
    while (sline >> n >> c && c == ',') {
      row.push_back(n);
    }
    return row;     
}

vector<vector<int>> ReadBoardFile(string path) {
  ifstream myfile (path);
  vector<vector<int>> board{};
  if (myfile) {
    string line;
    while (getline(myfile, line)) {
      vector<int> row = ParseLine(line);
      board.push_back(row);
    }
  }
  return board;         
}

string CellString(State cell) {
  switch(cell) {
    case State::kObstacle: return "◘ ";
    default: return "0 ";
  }
}

void PrintBoard(const vector<vector<int>> board) {
  for (int i =0; i < board.size(); i++) {
    for (int j =0; j < board[i].size(); j++) {
        cout << board[i][j];
    }  
    cout << "\n";
  }
}

int main() {
  auto board = ReadBoardFile("1.board");    
  PrintBoard(board);
}