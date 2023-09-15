// 在排序数组中查找元素的第一个和最后一个位置
class Solution {
 public:
  vector<int> searchRange(vector<int> nums, int t) {
    int len = nums.size();
    if (!len) return {-1, -1};
    int left = 0;
    int right = len - 1;
    while (left < right) {
      int mid = (left + right) / 2;
      cout << mid << endl;
      if (nums[mid] < t)
        left = mid + 1;
      else
        right = mid;
    }
    if (nums[left] ^ t) return {-1, -1};
    int i;
    for (i = left; i < nums.size(); i++)
      if (nums[i] ^ t) break;

    return {left, i - 1};
  }
};