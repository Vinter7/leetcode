#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  void sortColors(vector<int>& nums) {
    short n1 = 0, n2 = 0, n0 = 0;
    for (short i = 0; i < nums.size(); ++i) {
      if (nums[i] == 0) {
        nums[n2++] = 2;
        nums[n1++] = 1;
        nums[n0++] = 0;
      } else if (nums[i] == 1) {
        nums[n2++] = 2;
        nums[n1++] = 1;
      } else
        nums[n2++] = 2;
    }
  }
};