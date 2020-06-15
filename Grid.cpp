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

void PrintBoard(const vector<vector<int>> board) {
  for (int i =0; i < board.size(); i++) {
    for (int j =0; j < board[i].size(); j++) {
        cout << board[i][j];
    }  
    cout << "\n";
  }
}

int main() {

    ReadBoardFile("1.board");

    vector<vector<int>> board = {{0, 1, 0, 0, 0, 0},
                                {0, 1, 0, 0, 0, 0},
                                {0, 1, 0, 0, 0, 0},
                                {0, 1, 0, 0, 0, 0},
                                {0, 0, 0, 0, 1, 0}};
    
    PrintBoard(board);
}