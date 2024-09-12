#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int search(vector<int> &nums, int target)
  {
    auto iter = find(nums.begin(), nums.end(), target);
    return iter == nums.end() ? -1 : distance(nums.begin(), iter);
  }
};