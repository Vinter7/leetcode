#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  int n;
  int m;
  vector<vector<int>> steps = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
  bool find(vector<vector<char>>& net, int i, int j, string w) {
    if (net[i][j] != w[0])
      return false;
    if (w.size() == 1)
      return true;

    char rc = net[i][j];
    net[i][j] = '-';
    for (auto& k : steps) {
      int ii = i + k[0];
      int jj = j + k[1];
      if (ii >= 0 && jj >= 0 && ii < n && jj < m)
        if (find(net, ii, jj, w.substr(1)))
          return true;
    }
    net[i][j] = rc;
    return false;
  }
  bool exist(vector<vector<char>>& net, string w) {
    n = net.size();
    m = net[0].size();
    for (int i = 0; i < n; ++i)
      for (int j = 0; j < m; ++j) {
        if (net[i][j] == w[0] && find(net, i, j, w))
          return true;
      }

    return false;
  }
};