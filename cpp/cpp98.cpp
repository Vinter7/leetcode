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
  bool isValidBST(TreeNode* root,
                  int lower = 1 << 31,
                  int upper = (1 << 31) - 1) {
    if (!root)
      return true;
    if (root->val <= lower || root->val >= upper)
      return false;
    return isValidBST(root->left, lower, root->val) &&
           isValidBST(root->right, root->val, upper);
  }
};