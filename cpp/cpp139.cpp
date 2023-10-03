#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  bool wordBreak(string str, vector<string> words) {
    vector<bool> ans(str.size() + 1, 0);
    ans[0] = 1;
    for (int i = 1; i < ans.size(); ++i) {
      if (!ans[i - 1])
        continue;
      for (auto j : words) {
        int jl = j.size();
        if (jl > str.size() - i + 1)
          continue;
        if (j == str.substr(i - 1, jl)) {
          ans[i + jl - 1] = 1;
          if (i + jl - 1 == str.size())
            return true;
        }
      }
    }
    return false;
  }
};