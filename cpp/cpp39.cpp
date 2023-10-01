// 组合总和
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  vector<vector<int>> combinationSum(vector<int>& nums, int t) {
    vector<vector<int>> ans;
    for (char i = 0; i < nums.size(); i++) {
      if (nums[i] < t) {
        vector<int> temp(nums.begin(), nums.end());
        auto ret = combinationSum(temp, t - nums[i]);
        if (ret.size()) {
          for (auto&& j : ret)
            j.push_back(nums[i]);
          ans.insert(ans.end(), ret.begin(), ret.end());
        }
      } else if (nums[i] == t)
        ans.push_back({nums[i]});
    }
    return ans;
  }
};

int main() {
  vector<int> arr = {2, 3, 5};

  Solution s;
  auto ans = s.combinationSum(arr, 8);
  for (auto i : ans) {
    for (auto j : i) {
      cout << j << endl;
    }
  }

  return 0;
}
