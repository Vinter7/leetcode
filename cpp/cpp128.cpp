#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  int longestConsecutive(vector<int>& nums) {
    if (!nums.size())
      return 0;
    sort(nums.begin(), nums.end());
    int c = 1, max = 1;
    for (int i = 1; i < nums.size(); ++i) {
      if (nums[i] == nums[i - 1])
        continue;
      if (nums[i] - nums[i - 1] == 1)
        ++c;
      else
        c = 1;
      if (c > max)
        max = c;
    }

    return max;
  }
};