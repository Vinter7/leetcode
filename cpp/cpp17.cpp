#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> m = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
class Solution
{
public:
  vector<string> func(string str)
  {
    if (str.empty())
      return {};
    vector<string> ans;
    if (str.size() == 1)
    {
      for (auto i : m[str[0] - '0'])
      {
        string temp;
        temp += i;
        ans.push_back(temp);
      }
      return ans;
    }

    // vector<string> ans;
    for (auto i : m[str[0] - '0'])
      for (auto j : func(str.substr(1)))
        ans.push_back(i + j);

    return ans;
  }
};