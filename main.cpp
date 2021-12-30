#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> getRow(int rowIndex) {
    vector<int> previous_row;
    vector<int> row;
    if (0 == rowIndex) {
      row = {1};
    } else if (1 == rowIndex) {
      row = {1,1};
    } else if (1 < rowIndex) {
      row = {1,1};
      for (int i = 2; i <= rowIndex; ++i) {
        previous_row = move(row);
        size_t length = previous_row.size() + 1;
        row.resize(length);
        row.front() = row.back() = 1;
        for (int k = 1; k < length - 1; ++k) {
          row[k] = previous_row[k-1] + previous_row[k];
        }
      }
    }

    return row;
  }
};

void TestGetRow() {
  Solution s;
  assert((vector<int>{1}) == s.getRow(0));
  assert((vector<int>{1,1}) == s.getRow(1));
  assert((vector<int>{1,3,3,1}) == s.getRow(3));
}

int main() {
  TestGetRow();
  std::cout << "Ok!" << std::endl;
  return 0;
}
