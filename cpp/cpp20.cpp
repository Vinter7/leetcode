#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
class Solution
{
public:
  bool isValid(string s)
  {
    vector<char> arr;
    unordered_map<char, char> m = {{'(', ')'}, {'[', ']'}, {'{', '}'}};
    for (char i : s)
    {
      if (m.find(i) != m.end())
        arr.push_back(m[i]);
      else
      {
        if (arr.size())
        {
          if (arr.back() != i)
            return false;
        }
        else
          return false;
        arr.pop_back();
      }
    }
    return arr.empty();
  }
};