#include <iostream>
#include <unordered_map>
#include <vector>

#include <algorithm>
using namespace std;

class Solution {
 public:
  vector<vector<string>> groupAnagrams(vector<string>& strs) {
    if (strs.size() == 1)
      return {strs};

    unordered_map<string, vector<string>> m;
    for (auto i : strs) {
      string temp = i;
      sort(temp.begin(), temp.end());
      if (m.find(temp) == m.end())
        m[temp] = {i};
      else
        m[temp].push_back(i);
    }
    vector<vector<string>> ans;
    for (auto&& i : m)
      ans.push_back(i.second);
    return ans;
  }
};