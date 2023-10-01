#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  vector<vector<int>> permute(vector<int>& nums) {
    int n = nums.size();
    if (n == 1)
      return {nums};
    if (n == 2)
      return {nums, {nums[1], nums[0]}};

    vector<vector<int>> ans;
    vector<int> temp(nums.begin() + 1, nums.end());

    for (auto&& i : permute(temp)) {
      for (char j = 0; j < i.size() + 1; j++) {
        vector<int> temp2(i);
        temp2.insert(temp2.begin() + j, nums[0]);
        ans.push_back(temp2);
      }
    }
    return ans;
  }
};