#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
  double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
  {
    int n = nums1.size();
    int m = nums2.size();
    int i = 0, j = 0;
    int k = 0;
    int mid = (n + m) / 2;
    vector<int> res;
    while (i < n && j < m)
    {
      if (nums1[i] < nums2[j])
      {
        res.push_back(nums1[i]);
        i++;
      }
      else
      {
        res.push_back(nums2[j]);
        j++;
      }
      k++;
      if (k > mid)
      {
        break;
      }
    }
  }
};