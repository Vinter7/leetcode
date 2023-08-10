// 盛最多水的容器
#include <vector>
using namespace std;
class Solution
{
public:
  int maxArea(vector<int> nums)
  {
    int i = 0, j = nums.size() - 1, ans = 0;
    while (i < j)
    {
      int area = min(nums[i], nums[j]) * (j - i);
      if (area > ans)
        ans = area;
      nums[i] > nums[j] ? j-- : i++;
    }
    return ans;
  }
};