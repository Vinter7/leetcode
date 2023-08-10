// 最长回文子串
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
  string longestPalindrome(string s)
  {
    string str = "";
    for (char i : s)
    {
      str += i;
      str += '#';
    }

    int max = 1;
    int ii = 0;
    for (int i = 0; i < str.size() - 1; i++)
    {
      int step = 1;

      while ((i - step >= 0) && (i + step < str.size()) && str[i - step] == str[i + step])
        step++;

      if (step > max)
      {
        max = step;
        ii = i;
      }
    }
    string ans;

    if (str[ii] != '#')
      ans += str[ii];

    for (size_t i = 1; i < max; i++)
    {
      char temp = str[ii + i];
      if (temp != '#')
        ans = temp + ans + temp;
    }
    return ans;
  }
};