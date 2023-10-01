#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  bool canJump(vector<int>& nums) {
    int n = nums.size();
    int step = 0;
    for (int i = 0; i <= step; ++i) {
      if (nums[i] + i > step)
        step = nums[i] + i;
      if (step >= n - 1)
        return true;
    }
    return false;
  }
};