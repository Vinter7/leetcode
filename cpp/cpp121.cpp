#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  int maxProfit(vector<int>& prices) {
    int buy = prices[0], max = 0;
    for (auto i : prices) {
      if (i < buy)
        buy = i;
      else if (i - buy > max)
        max = i - buy;
    }
    return max;
  }
};