// 在排序数组中查找元素的第一个和最后一个位置
#include <iostream>
#include <vector>

using namespace std;
class Solution
{
public:
  vector<int> searchRange(vector<int> nums, int t)
  {
    int len = nums.size();
    if (!len)
      return {-1, -1};
    int left = 0;
    int right = 0;
    for (left = 0; left < len; left++)
    {
      if (nums[left] == t)
        break;
    }
    if (left == len)
    {
      return {-1, -1};
    }
    for (right = len - 1; right >= left; right--)
    {
      if (nums[right] == t)
        break;
    }
    return {left, right};
  }
};