#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  int maxSubArray(vector<int>& nums) {
    int ans = *max_element(nums.begin(), nums.end());
    if (ans < 0)
      return ans;
    ans = 0;
    int max = 0;
    for (auto&& i : nums) {
      ans += i;
      if (ans < 0) {
        ans = 0;
        continue;
      }
      if (ans > max)
        max = ans;
    }
    return max;
  }
};