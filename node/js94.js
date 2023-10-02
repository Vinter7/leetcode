var inorderTraversal = function (root) {
  if (!root) {
    return []
  }
  let left = inorderTraversal(root.left)
  let right = inorderTraversal(root.right)
  return [...left, root.val, ...right]
  // return [root.val, ...left, ...right]; 附带先序遍历
  // return [...left,  ...right,root.val]; 附带后序遍历
}
