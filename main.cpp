#include <cassert>
#include <iostream>
#include <vector>

using namespace std;

class Solution {
 public:
  vector<int> getRow(int rowIndex) {
    // FIXME
    return {};
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
