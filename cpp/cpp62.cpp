#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  int uniquePaths(int m, int n) {
    vector<vector<int>> net(m, vector<int>(n));
    for (char i = 0; i < m; i++)
      net[i][0] = 1;
    for (char j = 0; j < n; j++)
      net[0][j] = 1;
    for (char i = 1; i < m; i++)
      for (char j = 1; j < n; j++)
        net[i][j] = net[i - 1][j] + net[i][j - 1];
    return net[m - 1][n - 1];
  }
};