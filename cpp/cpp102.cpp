#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode* left, TreeNode* right)
      : val(x), left(left), right(right) {}
};
class Solution {
 public:
  vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> ans = {};
    if (!root)
      return ans;
    ans.push_back({root->val});
    auto left = levelOrder(root->left);
    auto right = levelOrder(root->right);
    int ls = left.size();
    int rs = right.size();
    for (int i = 0; i < max({ls, rs}); i++) {
      ans.push_back({});
      if (i < ls)
        ans[i + 1].insert(ans[i + 1].end(), left.begin(), left.end());
      if (i < rs)
        ans[i + 1].insert(ans[i + 1].end(), right.begin(), right.end());
    }
    return ans;
  }
};

class Solution {
 public:
  vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> ret;
    if (!root) {
      return ret;
    }

    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
      int currentLevelSize = q.size();
      ret.push_back(vector<int>());
      for (int i = 1; i <= currentLevelSize; ++i) {
        auto node = q.front();
        q.pop();
        ret.back().push_back(node->val);
        if (node->left)
          q.push(node->left);
        if (node->right)
          q.push(node->right);
      }
    }

    return ret;
  }
};
