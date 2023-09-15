// 下一个排列
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
class Solution
{
public:
  void nextPermutation(vector<int> &nums)
  {
    int i = nums.size() - 2;
    while (i >= 0 && nums[i] >= nums[i + 1])
      i--;
    if (i == -1)
    {
      reverse(nums.begin(), nums.end());
      return;
    }

    int j = nums.size() - 1;
    while (j >= 0 && nums[j] <= nums[i])
      j--;
    swap(nums[j], nums[i]);
    reverse(nums.begin() + i + 1, nums.end());
    return;
  }
};