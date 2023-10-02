#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
 public:
  int numTrees(int n) {
    if (n < 3)
      return n;
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for (char i = 3; i <= n; ++i)
      for (char j = 1; j <= i; ++j)
        dp[i] += dp[j - 1] * dp[i - j];
    return dp[n];
  }
};