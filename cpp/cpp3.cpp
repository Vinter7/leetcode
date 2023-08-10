// 无重复字符的最长子串
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
  int lengthOfLongestSubstring(string str)
  {
    string sub = "";
    int max = 0;
    for (auto i : str)
    {
      int idx = sub.find(i);
      if (idx != string::npos)
        sub = sub.substr(idx + 1);

      sub += i;
      if (max < sub.size())
        max = sub.size();
    }
    return max;
  }
};