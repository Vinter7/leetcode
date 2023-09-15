// 括号生成
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
  vector<string> generateParenthesis(int n)
  {
    vector<string> all = {"()"};
    for (int i = 1; i < n; i++)
    {
      vector<string> out;
      for (const string &j : all)
      {
        for (int k = 0; k < j.size(); k++)
        {
          if (j[k] == ')')
            break;
          if (k == 0)
            out.push_back("()" + j);
          out.push_back(j.substr(0, k + 1) + "()" + j.substr(k + 1));
        }
      }
      all = out;
    }
    return all;
  }
};