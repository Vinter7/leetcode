// 三数之和
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
  auto threeSum(vector<int> nums)
  {
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); ++i)
    {
      if (nums[i] > 0)
        break;
      if (i && nums[i] == nums[i - 1])
        continue;
      int left = i + 1, right = nums.size() - 1;
      while (left < right)
      {
        int sum = nums[i] + nums[left] + nums[right];
        if (sum == 0)
        {
          ans.push_back({nums[i], nums[left], nums[right]});
          while (left < right && nums[left] == nums[left + 1])
            ++left;
          while (left < right && nums[right] == nums[right - 1])
            --right;
          ++left;
          --right;
        }
        else if (sum > 0)
          --right;
        else
          ++left;
      }
    }
    return ans;
  }
};