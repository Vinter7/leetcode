#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  void rotate(vector<vector<int>>& matrix) {
    char n = matrix.size();

    for (char i = 0; i < n / 2; ++i)
      matrix[i].swap(matrix[n - i - 1]);

    for (char i = 0; i < n; ++i)
      for (char j = i + 1; j < n; ++j)
        swap(matrix[i][j], matrix[j][i]);
  }
};