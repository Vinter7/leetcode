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
  bool cmp(TreeNode* left, TreeNode* right) {
    if (left == right)
      return true;
    if (left == nullptr || right == nullptr || left->val != right->val)
      return false;
    return cmp(left->left, right->right) && cmp(left->right, right->left);
  }
  bool isSymmetric(TreeNode* root) {
    if (!root)
      return true;
    return cmp(root->left, root->right);
  }
};