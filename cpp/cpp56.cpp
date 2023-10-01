#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  static bool sortIt(const vector<int>& v1, const vector<int>& v2) {
    if (v1[0] == v2[0])
      return v1[1] < v2[1];
    return v1[0] < v2[0];
  }
  vector<vector<int>> merge(vector<vector<int>>& nums) {
    sort(nums.begin(), nums.end(), sortIt);
    vector<vector<int>> ans = {nums[0]};
    // int len  = ;
    for (int i = 1; i < nums.size(); i++) {
      auto& temp = ans.back()[1];
      if (nums[i][0] <= temp) {
        if (nums[i][1] > temp)
          temp = nums[i][1];
      } else
        ans.push_back(nums[i]);
    }
    return ans;
  }
};