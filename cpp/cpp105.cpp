class Solution {
 public:
  TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    if (preorder.empty())
      return nullptr;
    int root_val = preorder[0];
    vector<int> left_inorder(inorder.begin(),
                             find(inorder.begin(), inorder.end(), root_val));
    vector<int> right_inorder(
        find(inorder.begin(), inorder.end(), root_val) + 1, inorder.end());
    vector<int> left_preorder(preorder.begin() + 1,
                              preorder.begin() + 1 + left_inorder.size());
    vector<int> right_preorder(preorder.begin() + 1 + left_inorder.size(),
                               preorder.end());
    TreeNode* root = new TreeNode(root_val);
    root->left = buildTree(left_preorder, left_inorder);
    root->right = buildTree(right_preorder, right_inorder);
    return root;
  }
};