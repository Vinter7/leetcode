const isValidBST = (root, lower = -Infinity, upper = Infinity) => {
  if (!root) return true

  if (root.val <= lower || root.val >= upper) return false

  return (
    isValidBST(root.left, lower, root.val) &&
    isValidBST(root.right, root.val, upper)
  )
}
