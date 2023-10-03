class Solution {
 public:
  void flatten(TreeNode* root) {
    auto i = root;
    while (i) {
      if (i->left) {
        auto j = i->left;
        for (; j->right; j = j->right)
          ;
        j->right = i->right;
        i->right = i->left;
        i->left = NULL;
      }
      i = i->right;
    }
  }
};