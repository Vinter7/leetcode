#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans(1);
    for (auto& i : nums) {
      int n = ans.size();
      for (int j = 0; j < n; j++) {
        vector<int> temp(ans[j]);
        temp.push_back(i);
        ans.push_back(temp);
      }
    }
    return ans;
  }
};
